/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:36:15 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/09/25 12:25:02 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main( void )
{
	std::string	user_input;
	PhoneBook	phonebook;

	do {
		std::cout << "-> ";
		std::getline( std::cin, user_input );
		if ( user_input.compare( "ADD" ) == 0 )
			phonebook.Add_New_Contact();
		if ( user_input.compare( "SEARCH" ) == 0 )
			phonebook.search_Contact();
		if ( user_input.compare( "EXIT" ) == 0 )
			break ;
	} while ( true );
	return ( 0 );
}
