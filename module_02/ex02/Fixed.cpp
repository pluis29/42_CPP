/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:46:06 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/10/27 11:48:53 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

const int	Fixed::_bits = 8;

Fixed::Fixed( void ) : _raw_bits( 0 ) {
	/* std::cout << "Default constructor called" << std::endl; */
	return ;
}

Fixed::Fixed( Fixed const& fixed_instance ) {
	/* std::cout << "Copy constructor called" << std::endl; */
	*this = fixed_instance;
	return ;
}

Fixed::~Fixed( void ) {
	/* std::cout << "Destructor called" << std::endl; */
	return ;
}

Fixed::Fixed( int const value ) {
	/* std::cout << "Int constructor called" << std::endl; */
	this->_raw_bits = value << Fixed::_bits;
	return ;
}

Fixed::Fixed( float const value ) {
	/* std::cout << "Float constructor called" << std::endl; */
	this->_raw_bits = roundf( value * ( 1 << Fixed::_bits ) );
	return ;
}

void	Fixed::setRawBits( int const raw ) {
	this->_raw_bits = raw;
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

/* operators */
std::ostream& operator<<( std::ostream& out, Fixed const& fixed_instance ) {
	out << fixed_instance.toFloat();
	return out;
}

Fixed& Fixed::operator=( Fixed const& fixed_instance ) {
	/* std::cout << "Copy assignment operator called" << std::endl; */
	this->_raw_bits = fixed_instance.getRawBits();
	return *this;
}

/* comparison ; Returning boolean */
bool Fixed::operator>( Fixed const& fixed_instance ) {
	return ( this->getRawBits() > fixed_instance.getRawBits() );
}

bool Fixed::operator<( Fixed const& fixed_instance ) {
	return ( this->getRawBits() < fixed_instance.getRawBits() );
}

bool Fixed::operator>=( Fixed const& fixed_instance ) {
	return ( this->getRawBits() >= fixed_instance.getRawBits() );
}

bool Fixed::operator<=( Fixed const& fixed_instance ){
	return ( this->getRawBits() <= fixed_instance.getRawBits() );
}

bool Fixed::operator==( Fixed const& fixed_instance ) {
	return ( this->getRawBits() == fixed_instance.getRawBits() );
}

bool Fixed::operator!=( Fixed const& fixed_instance ) {
	return ( this->getRawBits() != fixed_instance.getRawBits() );
}

/* arithmetic */
Fixed Fixed::operator+( Fixed const& fixed_instance ) {
	Fixed	rtn;
	rtn.setRawBits( this->getRawBits() + fixed_instance.getRawBits() );
	return rtn;
}

Fixed Fixed::operator-( Fixed const& fixed_instance ) {
	Fixed	rtn;
	rtn.setRawBits( this->getRawBits() - fixed_instance.getRawBits() );
	return rtn;
}

Fixed Fixed::operator*( Fixed const& fixed_instance ) {
	Fixed	rtn;
	rtn.setRawBits( this->getRawBits() * fixed_instance.getRawBits() >> Fixed::_bits);
	return rtn;
}

Fixed Fixed::operator/( Fixed const& fixed_instance ) {
	Fixed	rtn;
	rtn.setRawBits( this->getRawBits() / fixed_instance.getRawBits() << Fixed::_bits);
	return rtn;
}

 /* increment/decrement */
Fixed Fixed::operator++( void ) {
	Fixed	rtn;
	rtn._raw_bits = ++_raw_bits;
	return rtn;
}

Fixed Fixed::operator++( int ) {
	Fixed	rtn;
	rtn._raw_bits = _raw_bits++;
	return rtn;
}

Fixed Fixed::operator--( void ) {
	Fixed	rtn;
	rtn._raw_bits = --_raw_bits;
	return rtn;
}
Fixed Fixed::operator--( int ) {
	Fixed	rtn;
	rtn._raw_bits = _raw_bits--;
	return rtn;
}

/* remnant */
Fixed&		Fixed::min( Fixed & fi_1, Fixed & fi_2 ) {
	if ( fi_1.getRawBits() < fi_2.getRawBits() )
		return fi_1;
	return fi_2;
}

Fixed const&	Fixed::min( Fixed const & fi_1, Fixed const & fi_2 ) {
	if ( fi_1.getRawBits() < fi_2.getRawBits() )
		return fi_1;
	return fi_2;
}

Fixed&		Fixed::max( Fixed & fi_1, Fixed & fi_2 ) {
	if ( fi_1.getRawBits() > fi_2.getRawBits() )
		return fi_1;
	return fi_2;
}

Fixed const&	Fixed::max( Fixed const & fi_1, Fixed const & fi_2 ) {
	if ( fi_1.getRawBits() > fi_2.getRawBits() )
		return fi_1;
	return fi_2;
}
