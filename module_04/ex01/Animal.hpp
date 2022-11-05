/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:42:20 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 18:42:36 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ANIMAL_HPP_
#define		ANIMAL_HPP_

#include <iostream>

class Animal {
	public:
	Animal( void );
	Animal( Animal const& animal_instance );
	Animal & operator=( Animal const& animal_instance );
	virtual ~Animal( void );

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const;

	protected:
	std::string	_type;
};

#endif
