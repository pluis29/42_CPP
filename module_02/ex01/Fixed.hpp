/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:46:04 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/10/05 23:30:51 by lpaulo-d         ###   ########.fr       */
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
		Fixed& operator=( Fixed const& fixed_instance );
		~Fixed( void );

		int		getRawBits( void ) const;
		float	toFloat( void ) const;
		float	toInt( void ) const;

	private:
		int					_raw_bits;
		static const int	_bits;
};

std::ostream& operator<<( std::ostream& out, Fixed const& fixed_instance );


#endif
