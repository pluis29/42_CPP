/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:30:51 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/23 13:13:33 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

#include <cstdlib>
#include <utility>
#include <string>
#include <cmath>


class BitcoinExchange {
	public:
		BitcoinExchange( void );
		BitcoinExchange( std::string filename );
		BitcoinExchange( BitcoinExchange const& instance );
		~BitcoinExchange( void );
		BitcoinExchange& operator=( BitcoinExchange const& instance );
		bool	get_file(std::string filename);

		bool	verifyTxt(char *filename);
		bool	VerifyDate(std::string const date);
		bool	VerifyValue(std::string const value);
		double	FindEqual(std::string date);
		double	FindCloser(std::string date);

	private:
		std::map<std::string, double> _data;

};

#endif
