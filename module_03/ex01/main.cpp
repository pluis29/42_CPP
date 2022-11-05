/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:02:40 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/02 00:11:12 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main( void ) {
	ScavTrap persona( "Hank" );

	persona.attack( "Sir.Louis" );
	persona.takeDamage( 3 );
	persona.takeDamage( 50 );
	persona.beRepaired( 3 );
	persona.guardGate( );
	persona.takeDamage( 50 );

	return 0;
}
