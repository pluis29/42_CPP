/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:46:38 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 18:22:52 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Animal" ) {
	std::cout << "[Animal] default constructor called" << std::endl;
	return ;
}

Animal::Animal( const Animal& animal_instance ) {
	std::cout << "[Animal] copy constructor called" << std::endl;
	*this = animal_instance;
	return ;
}

Animal& Animal::operator=( const Animal &animal_instance ) {
	std::cout << "[Animal] copy assignment operator called" << std::endl;
	this->_type = animal_instance._type;
	return *this;
}

Animal::~Animal( void ) {
	std::cout << "[Animal] Destructor called" << std::endl;
}

std::string	Animal::getType( void ) const {
	return this->_type;
}

void	Animal::makeSound( void ) const {
	std::cout << "Human Talking" << std::endl;
	return ;
}
