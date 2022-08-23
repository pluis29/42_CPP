/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:32:00 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/22 23:09:47 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	horde;

	horde = new Zombie[N];
	for ( int i = 0; i < N; i++ )
		horde[i].setName( name );

	return ( horde );
}
