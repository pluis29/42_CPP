/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:10:44 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 19:17:32 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	this->_type = "Cat";
	std::cout << "[WrongCat] default constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat& wc_instance ) : WrongAnimal( wc_instance ) {
	std::cout << "[WrongCat] copy constructor called" << std::endl;
	*this = wc_instance;
	return ;
}

WrongCat& WrongCat::operator=( const WrongCat &wc_instance ) {
	std::cout << "[WrongCat] copy assignment operator called" << std::endl;
	this->_type = wc_instance._type;
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << "[WrongCat] Destructor called" << std::endl;
}
