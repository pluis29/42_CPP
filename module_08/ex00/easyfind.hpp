/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:09:44 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/08 12:48:54 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP_
#define	EASYFIND_HPP_

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception {
	virtual const char* what() const throw() {
		return "Exception: Not found.";
	};
};

template<typename T>
typename T::iterator easyfind( T& container, int i ) {
	typename T::iterator	it;

	it = std::find( container.begin(), container.end(), i );
	if (it == container.end())
		throw ::NotFoundException();
	return it;
}

#endif
