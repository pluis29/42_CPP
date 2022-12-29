/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:41:50 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/12/27 16:24:02 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ( void ) {
	std::cout << "[Brain] default constructor called " << std::endl;
	return ;
}

Brain::Brain( Brain const& brain_instance ) {
	std::cout << "[Brain] copy constructor called " << std::endl;
	*this = brain_instance;
	return ;
}

Brain::~Brain( void ) {
	std::cout << "[Brain] destructor called " << std::endl;
	return ;
}

Brain& Brain::operator=( Brain const& brain_instance ) {
	std::cout<< "[Brain] copy operator called" << std::endl;
	for ( int i = 0; i < 100; i++ ) {
		this->_ideas[i] = brain_instance._ideas[i];
	}
	return *this;
}

void Brain::setIdeas ( int index, std::string idea ) {
	if ( index >= 0 && index < 100 ) {
		this->_ideas[index] = idea;
	}
	else
		std::cout << "Fix index." << std::endl;
}

std::string Brain::getIdeas( int index ) {
	if ( index >= 0 && index < 100 ) {
		return this->_ideas[index];
	}
	else
		return "";
}
