/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:04:41 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/04 00:57:14 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <climits>
#include <limits>

void	convertChar( std::string str );
void	convertInt( std::string str );
void	convertFloat( std::string str );
void	convertDouble( std::string str );

int	main( int ac, char **av ) {
	if (ac != 2) {
		std::cout << "Wrong usage." << std::endl;
		return 1;
	}
	convertChar( av[1] );
	convertInt( av[1] );
	convertFloat( av[1] );
	convertDouble( av[1] );
	return 0;
}

void	convertChar( std::string str ) {
	//1 true ; 0 false isalpha
	if ( str.length() == 1 && isalpha(str[0]) ) {
		std::cout << "char: \'" << str << "\'" << std::endl;
		return ;
	}
	else if ( str.length() > 1 && isalpha(str[1]) ) {
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	//cast for isprint remove .0f atoi return int convert to char
	char casted = static_cast<char>(std::atoi(str.c_str()));
	if (isprint(casted))
		std::cout << "char: \'" << casted << "\'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	convertInt( std::string str ) {
	//without cast will print string not integer
	if ( str.length() == 1 && isalpha(str[0]) ) {
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	}
	long int i = atol(str.c_str());
	//need cover 0 cause was exclude in condition
	if ((i != 0 && i >= INT_MIN && i <= INT_MAX)
		|| (i == 0 && str.length() > 0 && str[0] == '0')) {
		std::cout << "int: " << i << std::endl;
	} else
		std::cout << "int: impossible" << std::endl;
}

void	convertFloat( std::string str ) {
	//letra
	if (str.length() == 1 && isalpha(str[0])) {
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
		return ;
	}

	double num = atof(str.c_str());
	if (num == 0 && str.length() != 1 && str[0] != '0') {
		std::cout << "float: nanf" << std::endl;
		return ;
	}

	if (num == std::numeric_limits<float>::infinity() && str[0] == '-')
		std::cout << "float: -inff" << std::endl;
	else if (num == std::numeric_limits<float>::infinity())
		std::cout << "float: +inff" << std::endl;
	else if ((long double)num == (int)num)
		std::cout << "float: " << num << ".0f" << std::endl;
	else
		std::cout << "float: " << num << "f" << std::endl;
}

void	convertDouble( std::string str ) {
	if (str.length() == 1 && isalpha(str[0])) {
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
		return ;
	}

	double num = atof(str.c_str());
	if (str[0] != '0' && num == 0 && str.length() != 1) {
		std::cout << "double: nan" << std::endl;
		return ;
	}

	if (num == std::numeric_limits<double>::infinity() && str[0] == '-')
		std::cout << "double: -inf" << std::endl;
	else if (num == std::numeric_limits<double>::infinity())
		std::cout << "double: +inf" << std::endl;
	else if ((long double)num == (int)num)
		std::cout << "double: " << num << ".0" << std::endl;
	else
		std::cout << "double: " << num << std::endl;
}
