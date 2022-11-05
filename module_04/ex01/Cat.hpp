/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:25:02 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 20:34:38 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {
	public:
		Cat( void );
		Cat( Cat const& cat_instance );
		~Cat( void );
		Cat & operator=( Cat const& cat_instance );

		void	makeSound( void ) const ;
		Brain*	getBrain(void) const;
		
		private:
			Brain* _brain;
};

#endif
