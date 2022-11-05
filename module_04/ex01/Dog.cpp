/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:46:21 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 20:37:10 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )  {
	this->_type = "Dog";
	std::cout << "[Dog] default constructor called" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog( const Dog& dog_instance ) : Animal( dog_instance ){
	*this = dog_instance;
	std::cout << "[Dog] copy constructor called" << std::endl;
	return ;
}

Dog& Dog::operator=( const Dog &dog_instance ) {
	std::cout << "[Dog] copy assignment operator called" << std::endl;
	this->_type = dog_instance._type;
	return *this;
}

Dog::~Dog( void ) {
	std::cout << "[Dog] Destructor called" << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Au AU" << std::endl;
	return ;
}

Brain* Dog::getBrain() const
{
    return this->_brain;
}