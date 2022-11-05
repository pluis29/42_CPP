/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:41:50 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 20:33:00 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Brain.hpp"
//#include <cmath>
//Brain::Brain( void )
//{
//	//std::string quotes[10] = {
//	//	"Without music, life would be a mistake."
//	//	"Two things are infinite: the universe and human stupidity; and I'm not sure about the universe."
//	//	"Go to heaven for the climate and hell for the company."
//	//	"May you live every day of your life."
//	//	"Man is the only creature who refuses to be what he is."
//	//	"There is nothing either good or bad, but thinking makes it so."
//	//	"When we are tired, we are attacked by ideas we conquered long ago."
//	//	"I cannot teach anybody anything. I can only make them think"
//	//	"Those who know do not speak. Those who speak do not know."
//	//	"Heard melodies are sweet, but those unheard, are sweeter"
//	//};
//	//for (int i = 0; i < 100; i++)
//	//	this->_ideas[i] = quotes[rand() % 10];

//	//std::cout << "[Brain] default Constructor called" << std::endl;
//	std::string quotes[10] = {
//        "What is the meaning of life?",
//        "Where is the bathroom?",
//        "Where is the nearest restroom?",
//        "What time is it?",
//        "When the hell is lunch?",
//        "How much wood could a woodchuck chuck if a woodchuck could chuck wood?",
//        "Who is the president of the United States?",
//        "The quick brown fox jumps over the lazy dog.",
//        "Is this a dagger which I see before me?",
//        "Be not afraid of greatness: some are born great"
//    };

//    // Fill ideas with random strings
//    for (int i = 0; i < 100; i++) {
//        this->_ideas[i] = quotes[rand() % 10];
//		std::cout << this->_ideas[i] << std::endl;
//    }

//    std::cout << "[Brain] default constructor called" << std::endl;
//}


//Brain::Brain(const Brain &brain_instance)
//{
//	*this = brain_instance;
//	std::cout << "[Brain] Copy constructor called" << std::endl;
//}

//Brain::~Brain()
//{
//	std::cout << "[Brain] Destructor called" << std::endl;
//}

//Brain &Brain::operator=(Brain const &brain_instance)
//{
//	(void)brain_instance;
//	return *this;
//	std::cout << "[Brain] assignation operator called" << std::endl;
//}

//void Brain::getIdea(int index) const
//{
//	// if ( index >= 0 || index < 99 )
//	//	std::cout << "[Brain] Idea: " << this->_ideas[index] << std::endl;
//	// else
//	//	std::cout << "Index out of range" << std::endl;
//	if (index < 0 || index > 99)
//	{
//		std::cout << "Index out of bounds, brain overload!" << std::endl;
//		return;
//	}
//	else
//	{
//		std::cout << "[Brain] Idea: " << this->_ideas[index] << std::endl;
//	}
//}

#include "Brain.hpp"
#include <cmath>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
    // Array of quotes
    std::string quotes[10] = {
        "What is the meaning of life?",
        "Where is the bathroom?",
        "Where is the nearest restroom?",
        "What time is it?",
        "When the hell is lunch?",
        "How much wood could a woodchuck chuck if a woodchuck could chuck wood?",
        "Who is the president of the United States?",
        "The quick brown fox jumps over the lazy dog.",
        "Is this a dagger which I see before me?",
        "Be not afraid of greatness: some are born great"
    };

    // Fill ideas with random strings
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = quotes[rand() % 10];
    }

    std::cout << "[Brain] default constructor called" << std::endl;
}

Brain::Brain(const Brain& src)
{

    std::cout << "[Brain] copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
    std::cout << "[Brain] destroyed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain& Brain::operator=(Brain const& rhs)
{
		(void) rhs;
    std::cout << "[Brain] assignation operator called" << std::endl;
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Brain::getIdea(int index) const
{
    if (index < 0 || index > 99) {
        std::cout << "Index out of bounds, brain overload!" << std::endl;
        return;
    } else {
        std::cout << "[Brain] Idea: " << this->_ideas[index] << std::endl;
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */