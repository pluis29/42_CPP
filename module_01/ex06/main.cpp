/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:24:48 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/10/03 11:40:05 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int ac, char** av )
{
	Harl harl_instance;

	if ( ac != 2 )
	{
		std::cout << "Try:\n./harlFilter OPTION" << std::endl;
		return ( true );
	}
	harl_instance.complain( av[1] );
	return ( true );
}
