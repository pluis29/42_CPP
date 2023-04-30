/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:18:07 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/23 13:13:51 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int ac, char **av ){
	if ( ac != 2 ){
		std::cout << "Wrong usage. ./btc x.txt" << std::endl;
		return 1;
	}
	BitcoinExchange test;
	if (test.get_file("data.csv") == false){
		return 1;
	}
	if (test.verifyTxt( av[1] ) == false){
		return 1;
	}


	return 0;
}
