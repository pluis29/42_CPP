/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:46:04 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/10/27 11:41:36 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP_
#define	FIXED_HPP_

#include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( Fixed const& fixed_instance );
		Fixed( int const value );
		Fixed( float const value );
		~Fixed( void );

		Fixed& operator=( Fixed const& fixed_instance );

		bool	operator>( Fixed const& fixed_instance );
		bool	operator<( Fixed const& fixed_instance );
		bool	operator>=( Fixed const& fixed_instance );
		bool	operator<=( Fixed const& fixed_instance );
		bool	operator==( Fixed const& fixed_instance );
		bool	operator!=( Fixed const& fixed_instance );

		Fixed	operator+( Fixed const& fixed_instance );
		Fixed	operator-( Fixed const& fixed_instance );
		Fixed	operator*( Fixed const& fixed_instance );
		Fixed	operator/( Fixed const& fixed_instance );

		Fixed	operator++( void );
		Fixed	operator++( int );
		Fixed	operator--( void );
		Fixed	operator--( int );

		static Fixed&		min( Fixed & fi_1, Fixed & fi_2 );
		static Fixed const&	min( Fixed const & fi_1, Fixed const & fi_2 );
		static Fixed&		max( Fixed & fi_1, Fixed & fi_2 );
		static Fixed const&	max( Fixed const & fi_1, Fixed const & fi_2 );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		float	toInt( void ) const;

	private:
		int					_raw_bits;
		static const int	_bits;
};

std::ostream& operator<<( std::ostream& out, Fixed const& fixed_instance );


#endif
