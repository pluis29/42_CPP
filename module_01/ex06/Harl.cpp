/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:06:26 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/10/03 11:40:01 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void	Harl::complain( std::string level )
{
	std::string	index[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void ( Harl::*array_of_functions[4] ) ( void ) = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error };
	int	i = 0;

	while ( i < 4 )
	{
		if ( level.compare( index[i] ) == 0 )
			break ;
		i++;
	}

	switch (i)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		(this->*array_of_functions[0])();
		// Fall-through
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		(this->*array_of_functions[1])();
		// Fall-through
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		(this->*array_of_functions[2])();
		// Fall-through
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		(this->*array_of_functions[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]"
			<< std::endl;
	}
}

void	Harl::_debug( void )
{
	std::cout << "I love having extra bacon for my "
		"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void	Harl::_info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. "
		"You didn’t put enough bacon in my burger! If you did, "
		"I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. "
		"I’ve been coming for years whereas you started working"
		"here since last month." << std::endl;
}

void	Harl::_error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}
