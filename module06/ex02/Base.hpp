/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:46:58 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/04 13:22:04 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BASE_HPP_
#define	BASE_HPP_

#include <iostream>
#include <cstdlib>
#include <ctime>


class Base {
	public:
		virtual ~Base( void ) {
		};
};

class A : public Base {
};
class B : public Base {
};
class C : public Base {
};

Base*	generate( void );
void	identify( Base *p );
void	identify( Base &p );

#endif
