/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:37:25 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/06 20:42:03 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WHATEVER_HPP_
#define		WHATEVER_HPP_

#include <iostream>

template<typename T>
T	max( T const& x, T const& y ) {
	return ( x > y ? x : y );
}

template<typename T>
T	min( T const& x, T const& y ) {
	return ( x < y ? x : y );
}

template<typename T>
void	swap( T& x, T& y ) {
	T tmp = x;
	x = y;
	y = tmp;
	return ;
}

#endif
