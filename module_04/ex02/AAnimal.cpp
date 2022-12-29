/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:46:38 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/12/29 13:50:24 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type( "Animal" ) {
	std::cout << "[Animal] default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal( const AAnimal& animal_instance ) {
	std::cout << "[Animal] copy constructor called" << std::endl;
	*this = animal_instance;
	return ;
}

AAnimal& AAnimal::operator=( const AAnimal &animal_instance ) {
	std::cout << "[Animal] copy assignment operator called" << std::endl;
	this->_type = animal_instance._type;
	return *this;
}

AAnimal::~AAnimal( void ) {
	std::cout << "[Animal] Destructor called" << std::endl;
}

std::string	AAnimal::getType( void ) const {
	return this->_type;
}

void	AAnimal::makeSound( void ) const {
	std::cout << "Human Talking" << std::endl;
	return ;
}
