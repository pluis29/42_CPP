/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:45:47 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/22 23:11:28 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie*	horde;

	horde = zombieHorde( 15, "Spartan" );
	for ( int i = 0; i < 15; i++ )
		horde[i].announce();

	delete [] horde;
}
