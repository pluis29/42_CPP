/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:49:37 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/07 16:49:12 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP_
#define	ITER_HPP_

#include <iostream>
#include <string.h>

template<typename T>
void	iter( T*  array, unsigned int size, void(*f)(T&) ) {
	for ( unsigned i = 0; i < size; i++ )
		f(array[i]);
}

template<typename T>
void	iter( T*  array, unsigned int size, void(*f)(T const&) ) {
	for ( unsigned i = 0; i < size; i++ )
		f(array[i]);
}


template<typename T>
void	whatever_print( T *target, unsigned int size ) {
	for ( unsigned int i = 0; i < size; i++ )
		std::cout << target[i] << " ";
	std::cout<< std::endl;
	return ;
}

template<typename T>
void	increment( T &target ) {
	target += 1;
	return ;
}

#endif
