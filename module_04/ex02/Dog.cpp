/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:46:21 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/12/29 13:48:45 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )  {
	std::cout << "[Dog] default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog( const Dog& dog_instance ) : AAnimal( dog_instance ){
	std::cout << "[Dog] copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = dog_instance;
	return ;
}

Dog& Dog::operator=( const Dog &dog_instance ) {
	std::cout << "[Dog] copy assignment operator called" << std::endl;
	this->_type = dog_instance._type;
	*(this->_brain) = *(dog_instance._brain);
	return *this;
}

Dog::~Dog( void ) {
	std::cout << "[Dog] Destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound( void ) const {
	std::cout << "Au AU" << std::endl;
	return ;
}

std::string	Dog::getIdeas( int index ) {
	return (this->_brain->getIdeas(index));
}

void		Dog::setIdeas( int index, std::string idea ) {
	this->_brain->setIdeas( index, idea );
}