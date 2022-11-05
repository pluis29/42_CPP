/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:49:51 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/01 22:57:21 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ) {

	ClapTrap persona( "persona" );
	ClapTrap targert( "target" );


	persona.attack( "target" );
	persona.takeDamage( 3 );
	persona.beRepaired( 3 );

	return 0;
}
