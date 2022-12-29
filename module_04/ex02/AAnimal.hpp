/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:42:20 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/12/29 13:50:23 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		AANIMAL_HPP_
#define		AANIMAL_HPP_

#include <iostream>

class AAnimal {
	public:
	AAnimal( void );
	AAnimal( AAnimal const& animal_instance );
	AAnimal & operator=( AAnimal const& animal_instance );
	virtual ~AAnimal( void );

	virtual void	makeSound( void ) const = 0;
	std::string		getType( void ) const;

	protected:
	std::string	_type;
};

#endif
