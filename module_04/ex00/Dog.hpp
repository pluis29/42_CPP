/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:46:34 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 18:47:33 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
	public:
		Dog( void );
		Dog( Dog const& dog_instance );
		~Dog( void );
		Dog & operator=( Dog const& dog_instance );

		void	makeSound( void ) const ;
};

#endif
