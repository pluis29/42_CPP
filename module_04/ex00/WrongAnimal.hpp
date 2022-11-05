/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:52:16 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 19:14:55 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WRONG_ANIMAL_HPP_
#define		WRONG_ANIMAL_HPP_

#include <iostream>

class WrongAnimal {
	public:
	WrongAnimal( void );
	WrongAnimal( WrongAnimal const& wa_instance );
	WrongAnimal & operator=( WrongAnimal const& wa_instance );
	virtual ~WrongAnimal( void );

	void	makeSound( void ) const;
	std::string		getType( void ) const;

	protected:
	std::string	_type;
};

#endif
