/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:47:24 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/07 13:02:04 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP_
#define	ARRAY_HPP_

#include <iostream>

template<typename T>
class Array {
	public:
		Array( void );
		Array( unsigned int n );
		Array( Array<T> const& instance );
		~Array( void );

		unsigned int	size( void ) const;
		Array const&	operator=( Array const& instance );
		T&				operator[]( int );

		class IndexOutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		T*				_array;
		unsigned int	_size;
};

#include "Array.tpp"

#endif
