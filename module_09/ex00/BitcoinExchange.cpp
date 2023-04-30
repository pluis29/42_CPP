/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:15:18 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/23 13:13:28 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cmath>
#include <string>

BitcoinExchange::BitcoinExchange( void ) { return ; }

BitcoinExchange::~BitcoinExchange( void ) { return ; }

BitcoinExchange::BitcoinExchange( std::string filename ) {
	(void)filename;
	return ;
}

bool	BitcoinExchange::get_file(std::string filename){
	std::string		tmp_line;
	std::ifstream	file(filename.c_str());

	if ( file.fail() ) {
		std::cerr << "Failed to open csv" << std::endl;
		file.close();
		return false;
	}

	std::getline(file, tmp_line);
	while (std::getline(file, tmp_line)) {
		std::istringstream fcopy_line(tmp_line);
		std::string	date, value;
		std::getline(fcopy_line, date, ',');
		std::getline(fcopy_line, value);
		_data[date] = std::stod(value);
	}
	file.close();
	return true;

}

bool	BitcoinExchange::verifyTxt(char *filename) {
	double			result;
	std::ifstream	file;

	file.open( filename );
	if ( file.fail() ){
		std::cerr << "Error: could not open file." << std::endl;
		file.close();
		return false;
	}

	std::string first_line;
	std::getline(file, first_line );
	if (first_line.compare("date | value")){
		std::cerr << "First line is not \"date | value\"" << std::endl;
		file.close();
		return false;
	}

	std::string	tmp_line;
	while (std::getline(file, tmp_line)){
		std::istringstream	iss(tmp_line);
		std::string	date, value;
		char	separator;

		if (!(iss >> date >> separator >> value) || separator != '|')
			std::cerr << "Error: bad input => " << date << std::endl;
		else if (std::stod(value) < 0)
			std::cerr << "Error: not a positive number." << std::endl;
		else if (std::stod(value) > 1000)
			std::cerr << "Error: too large a number." << std::endl;
		else if ( !VerifyDate(date)  || !VerifyValue(value) )
			std::cerr << "Error: bad input => " << date << std::endl;
		else if (std::stod(value) > 0 || std::stod(value) < 1000){
			result = std::stod(value) * FindEqual(date);
			std::cout << date << " => " << value << " = " << result << std::endl;
		}
		else
			std::cerr << "Error: bad input => " << date << std::endl;
	}
	file.close();
	return true;
}

bool	BitcoinExchange::VerifyDate(std::string const date){
	int		year, month, day;
	char	separator_1, separator_2;
	std::istringstream iss(date);

	if ( date.length() != 10 )
		return false;
	iss >> year >> separator_1 >> month >> separator_2 >> day;
	if ( year < 0 || month < 1 || month > 12 || day < 1 || day > 31 ||
			separator_1 != '-' || separator_2 != '-' || iss.fail() )
		return false;
	return true;
}

bool	BitcoinExchange::VerifyValue(std::string const value) {
	int	is_float = 0;
	int is_char = 0;

	for ( size_t i = 0; i < value.length(); i++) {
		if (!((value[i] >= '0') && (value[i] <= '9'))) {
			if ( value[i] == '.' || value[i] == ',' )
				is_float++;
			else
				is_char++;
		}
	}
	if (is_char || is_float > 1)
		return false;
	return true;
}

double	BitcoinExchange::FindEqual(std::string date) {
	if (!(_data.count(date) > 0))
		return FindCloser(date);
	else{
		std::map<std::string, double>::iterator it = _data.find(date);
		return it->second;
	}
}

double	BitcoinExchange::FindCloser(std::string date) {
	std::map<std::string, double>::const_iterator upperbound = _data.upper_bound(date);
	if (upperbound == _data.begin())
		return upperbound->second;
	--upperbound;
	return upperbound->second;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const& instance ){
	*this = instance;
}

BitcoinExchange& BitcoinExchange::operator=( BitcoinExchange const& instance ){
	this->_data = instance._data;
	return *this;
}
