var config = {
    betPercentage: {
        label: 'teste valor da bet',
        value: currency.minAmount,
        type: 'number'
    },
    payout: {
        label: 'payout',
        value: 2,
        type: 'number'
    },
    onLoseTitle: {
        label: 'On Lose',
        type: 'title'
    },
    onLoss: {
        label: '',
        value: 'increase',
        type: 'radio',
        options: [{
                value: 'reset',
                label: 'Return to base bet'
            }, {
                value: 'increase',
                label: 'Increase bet by (loss multiplier)'
            }
        ]
    },
    lossMultiplier: {
        label: 'loss multiplier',
        value: 2,
        type: 'number'
    },
    onWinTitle: {
        label: 'On Win',
        type: 'title'
    },
    onWin: {
        label: '',
        value: 'reset',
        type: 'radio',
        options: [{
                value: 'reset',
                label: 'Return to base bet'
            }, {
                value: 'increase',
                label: 'Increase bet by (win multiplier)'
            }
        ]
    },
    winMultiplier: {
        label: 'win multiplier',
        value: 1,
        type: 'number'
    },
    otherConditionsTitle: {
        label: 'Other Stopping Conditions',
        type: 'title'
    },    
    winGoalAmount: {
        label: 'Stop once you have made this much',
        value: currency.amount * 2,
        type: 'number'
    },
    lossStopAmount: {
        label: 'Stop betting after losing this much without a win.',
        value: 0,
        type: 'number'
    },    
    otherConditionsTitle: {
        label: 'Experimentle Please Ignore',
        type: 'title'
    },
    loggingLevel: {
        label: 'logging level',
        value: 'compact',
        type: 'radio',
        options: [{
                value: 'info',
                label: 'info'
            }, {
                value: 'compact',
                label: 'compact'
            }, {
                value: 'verbose',
                label: 'verbose'
            }
        ]
    }
};
// deleted input parameters
var stop = 0;
var lossesForBreak = 0;
var roundsToBreakFor = 0;

// end deleted parameters
var totalWagers = 0;
var netProfit = 0;
var totalWins = 0;
var totalLoses = 0;
var longestWinStreak = 0;
var longestLoseStreak = 0;
var currentStreak = 0;
var loseStreak = 0;
var numberOfRoundsToSkip = 0;
var currentBet = GetNewBaseBet();
var totalNumberOfGames = 0;
var originalbalance = currency.amount;
var runningbalance = currency.amount;
var consequetiveLostBets = 0;
var lossStopAmountVar = config.lossStopAmount.value;

function main() {

    game.onBet = function () {

        // if we are set to skip rounds then do so.
        if (numberOfRoundsToSkip > 0) {
            numberOfRoundsToSkip -= 1;
            log.info('Skipping round to relax, and the next ' + numberOfRoundsToSkip + ' rounds.');
            return;
        } else {
        
                if(totalNumberOfGames == 0)
                {
                    // this is so we account for the first round.
                    currentBet = GetNewBaseBet();
                }
                
                if(loseStreak >= 2)
                {
                    if(game.history[0].crash > 200)
                    {
                        loseStreak = 0;
                    }
                    else
                    {
                        log.info('Not betting until current loseStreak is over.');
                        return;
                    }                    
                }

            log.info('Placed bet for the amount of ' + currentBet + ' ' + currency.currencyName);
            game.bet(currentBet, config.payout.value).then(function (payout) {
                runningbalance -= currentBet;
                totalWagers += currentBet;
                totalNumberOfGames += 1;

                if (payout > 1) {
                    var netwin = currentBet * config.payout.value - currentBet;
                    consequetiveLostBets = 0;
                    if(config.loggingLevel.value != 'compact')
                    {
                        LogMessage('We won a net profit of: ' + netwin.toFixed(8), 'success');
                    }
                    netProfit += netwin;
                    runningbalance += netwin + currentBet;

                    if (loseStreak > 0) {
                        loseStreak = 0;
                    }

                    currentStreak += 1;
                    totalWins += 1;

                    LogSummary('true', currentBet);

                    if (config.onWin.value === 'reset') {
                        currentBet = GetNewBaseBet();
                    } else {
                        currentBet *= config.winMultiplier.value;
                    }

                    LogMessage('Win, next bet: ' + currentBet.toFixed(8) + ' ' + currency.currencyName, 'success');
                } else {
                        //log.error('lost: ' + currentBet.toFixed(8) + ' ' + currency.currencyName);
                        netProfit -= currentBet;
                        loseStreak += 1;
                        currentStreak = 0;
                        totalLoses += 1;
                        consequetiveLostBets += currentBet;

                        LogSummary('false', currentBet);

                        if (config.onLoss.value == 'reset') {
                            currentBet = GetNewBaseBet();
                        } else {
                            currentBet *= config.lossMultiplier.value;
                        }
                            LogMessage('Lost, next bet: ' + currentBet.toFixed(8) + ' ' + currency.currencyName, 'failure');            
                    }

                    if (currentStreak > longestWinStreak) {
                        longestWinStreak = currentStreak;
                    }
                    if (loseStreak > longestLoseStreak) {
                        longestLoseStreak = loseStreak;
                    }

                    recordStats();

                    if (config.winGoalAmount.value != 0 && netProfit > config.winGoalAmount.value) {
                        // we have earned enough stop and quit.
                        log.success('The net profits ' + netProfit.toFixed(8) + ' which triggers stop the for making enough.');
                        game.stop();
                    }
                    if (lossStopAmountVar != 0 && consequetiveLostBets > (lossStopAmountVar)) {
                        // the point of this is to limit the bleed so you don't loose too much.
                        log.error('The net profits ' + netProfit.toFixed(8) + ' which triggers stop for losing enough. The next bet would be ' + currentBet.toFixed(8) + '.');
                        game.stop();
                    }
                }
            );
        }
    };
    }

    function recordStats() {
        if (config.loggingLevel.value != 'compact') {
            LogMessage('total wagers: ' + totalWagers.toFixed(8), 'info');
            LogMessage('Net Profit: ' + netProfit.toFixed(8), 'info');
            LogMessage('Current win streak: ' + currentStreak, 'info');
            LogMessage('Current Lose streak: ' + loseStreak, 'info');
            LogMessage('Total wins: ' + totalWins, 'info');
            LogMessage('Total Losses: ' + totalLoses, 'info');
            LogMessage('Longest win streak: ' + longestWinStreak, 'info');
            LogMessage('Longest lose streak: ' + longestLoseStreak, 'info');
        }
    }

    function GetNewBaseBet() {
        var returnValue = 0;
        //returnValue = runningbalance * (config.betPercentage.value / 100);
        returnValue = config.betPercentage.value;

        if(returnValue > currency.minAmount)
        {
            LogMessage('Recalculating base bet to ' + returnValue.toFixed(8) + ' which is ' + config.betPercentage.value + ' percent of ' + runningbalance.toFixed(8), 'info');
        }
        else
        {
            LogMessage('The recalculated bet amount ' + returnValue.toFixed(8) + ' is lower than the minimum allowed bet.  Setting bet to the minimum allowable amount of ' + currency.minAmount, 'info');
            returnValue = currency.minAmount;
        }

        return returnValue;
    }

    function LogSummary(wasWinner, betAmount) {
        if (config.loggingLevel.value == 'compact') {
            if (wasWinner == 'true') {
                var winAmount = (betAmount * config.payout.value) - betAmount;
				log.error('---------------------------');
                log.success('Win ' + winAmount.toFixed(8) + ' ' + currency.currencyName);
            } else {
				log.success('---------------------------');
                log.error('Lost ' + betAmount.toFixed(8) + ' ' + currency.currencyName);
            }
            var winPercentage = (totalWins / totalNumberOfGames) * 100;
            var losePercentage = (totalLoses / totalNumberOfGames) * 100;

            log.info('Total Games: ' + totalNumberOfGames);
            log.info('Wins: ' + totalWins + '(' + winPercentage.toFixed(2) + ' % )');
            log.info('Loses: ' + totalLoses + '(' + losePercentage.toFixed(2) + ' % )');

            var netNumber = runningbalance - originalbalance;
            var netPecentage = (netNumber / originalbalance) * 100;

            if (originalbalance < runningbalance) {
                log.success('Total Profit: ' + netNumber.toFixed(8) + '(' + netPecentage.toFixed(2) + '%)');
            } else {
                log.error('Total Profit: ' + netNumber.toFixed(8) + '(' + netPecentage.toFixed(2) + '%)');
            }
        }

    }

    /// Determines whether or not to log an event or not to make it easier later
    function LogMessage(message, loggingLevel) {
        if (message) {

            if (config.loggingLevel.value != 'compact') {
                switch (loggingLevel) {
                case 'success':
                    log.success(message);
                    break;
                case 'failure':
                    log.error(message);
                    break;
                case 'info':
                    log.info(message);
                    break;
                case 'compact':
                    break;
                case 'verbose':
                    if (isVerbose)
                        log.info(message);
                    break;
                }
            } else {
                switch (loggingLevel) {
                case 'success':
                    log.success(message);
                    break;
                case 'failure':
                    log.error(message);
                    break;
                case 'compact':
                    log.info(message);
                    break;
                case 'info':
                    break;
                case 'verbose':
                    break;
                }
            }
        }
    }