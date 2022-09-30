/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:59:56 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/24 21:46:18 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type( type )
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}


std::string&	Weapon::getType( void )
{
	return ( this->_type );
}


void	Weapon::setType( std::string type )
{
	this->_type = type;
	return ;
}
