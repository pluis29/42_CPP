/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:45:47 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/22 21:38:55 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	zombieMan( "Excalibur" );
	Zombie*	zombiePtr;

	zombiePtr = zombieMan.newZombie( "Pontito" );
	zombieMan.announce();
	zombiePtr->announce();
	zombieMan.randomChump( "Shampoo" );

	delete zombiePtr;
	return ( 0 );
}
