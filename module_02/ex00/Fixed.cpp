/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:46:06 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/10/05 23:30:13 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed( void ) : _raw_bits( 0 ) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=( Fixed const& fixed_instance ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = fixed_instance.getRawBits();
	return ( *this );
}

Fixed::Fixed( Fixed const& fixed_instance ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed_instance;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw_bits;
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw_bits = raw;
	return ;
}
