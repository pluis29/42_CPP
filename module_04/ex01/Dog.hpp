/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:46:34 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/12/27 16:19:22 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
	public:
		Dog( void );
		Dog( Dog const& dog_instance );
		~Dog( void );
		Dog & operator=( Dog const& dog_instance );

		void	makeSound( void ) const ;
		std::string	getIdeas( int index );
		void		setIdeas( int index, std::string idea );

	private:
		Brain*	_brain;
};

#endif
