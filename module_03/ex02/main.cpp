/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:02:40 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/02 00:56:23 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main( void ) {
	FragTrap persona( "Hank" );

	persona.attack( "Sir.Louis" );
	persona.takeDamage( 3 );
	persona.takeDamage( 50 );
	persona.beRepaired( 3 );
	persona.highFivesGuys( );
	persona.takeDamage( 50 );

	return 0;
}
