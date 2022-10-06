/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:46:06 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/10/05 23:38:25 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

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

Fixed::Fixed( int const value ) {
	std::cout << "Int constructor called" << std::endl;
	this->_raw_bits = value << Fixed::_bits;
	return ;
}

Fixed::Fixed( float const value ) {
	std::cout << "Float constructor called" << std::endl;
	this->_raw_bits = roundf( value * ( 1 << Fixed::_bits ) );
	return ;
}

int		Fixed::getRawBits( void ) const {
	return this->_raw_bits;
}

float	Fixed::toInt( void ) const {
	return ( this->_raw_bits >> Fixed::_bits );
}

float	Fixed::toFloat( void ) const {
	return ( (float)this->_raw_bits / (1 << Fixed::_bits ) );
}

std::ostream& operator<<( std::ostream& out, Fixed const& fixed_instance ) {
	out << fixed_instance.toFloat();
	return out;
}
