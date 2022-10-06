/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:46:04 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/10/05 23:29:46 by lpaulo-d         ###   ########.fr       */
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
		Fixed& operator=( Fixed const& fixed_instance );
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int					_raw_bits;
		static const int	_bits;
};


#endif
