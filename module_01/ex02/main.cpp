/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:11:20 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/24 20:12:32 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main( void )
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPTR = &str;
	std::string&	strREF = str;

	std::cout << std::left << std::setw(26) << "Memory address (str):" << &str << std::endl;
	std::cout << std::left << std::setw(26) << "Memory address (strPTR):" << strPTR << std::endl;
	std::cout << std::left << std::setw(26) << "Memory address (strREF):" << &strREF << std::endl;

	std::cout << std::left << std::setw(17) << "\nvalue (str):" << str << std::endl;
	std::cout << std::left << std::setw(17) << "value (strPTR): " << *strPTR << std::endl;
	std::cout << std::left << std::setw(17) << "value (strREF): " << strREF << std::endl;

	return ( 0 );
}
