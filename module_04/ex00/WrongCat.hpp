/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:09:50 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 19:15:40 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WRONG_CAT_HPP_
#define		WRONG_CAT_HPP_

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
	public:
	WrongCat( void );
	WrongCat( WrongCat const& ca_instance );
	WrongCat & operator=( WrongCat const& ca_instance );
	virtual ~WrongCat( void );

	void	makeSound( void ) const;
};

#endif
