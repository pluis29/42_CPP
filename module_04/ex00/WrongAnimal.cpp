/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:57:46 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 19:03:15 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "Animal" ) {
	std::cout << "[WrongAnimal] default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal& wa_instance ) {
	std::cout << "[WrongAnimal] copy constructor called" << std::endl;
	*this = wa_instance;
	return ;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &wa_instance ) {
	std::cout << "[WrongAnimal] copy assignment operator called" << std::endl;
	this->_type = wa_instance._type;
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return this->_type;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal Talking" << std::endl;
	return ;
}
