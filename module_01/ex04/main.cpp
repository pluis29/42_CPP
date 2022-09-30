/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:28:33 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/09/07 12:48:44 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static int	set_setup( std::string file, std::string s1, std::string s2);

int	main( int ac, char **av )
{
	/* if ( ac != 4 ) */
	/* { */
	/* 	std::cout << "Is need 4 aruments" << std::endl; */
	/* 	return ( 1 ); */
	/* } */

	set_setup( av[1], av[2], av[3] );

	return ( 0 );
}

int	set_setup( std::string file, std::string s1, std::string s2)
{
	/* ver sobre ifstrem e ofstream */
	return (true);
}
