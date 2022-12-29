/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:40:23 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/12/29 13:48:42 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )  {
	std::cout << "[Cat] default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat( const Cat& cat_instance ) : AAnimal( cat_instance ){
	std::cout << "[Cat] copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = cat_instance;
	return ;
}

Cat& Cat::operator=( const Cat &cat_instance ) {
	std::cout << "[Cat] copy assignment operator called" << std::endl;
	this->_type = cat_instance._type;
	*(this->_brain) = *(cat_instance._brain);
	return *this;
}

Cat::~Cat( void ) {
	std::cout << "[Cat] Destructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound( void ) const {
	std::cout << "Minhau" << std::endl;
	return ;
}

std::string	Cat::getIdeas( int index ) {
	return (this->_brain->getIdeas(index));
}

void		Cat::setIdeas( int index, std::string idea ) {
	this->_brain->setIdeas( index, idea );
}