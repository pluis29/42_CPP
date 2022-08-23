/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:57:31 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/22 22:41:38 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {
	public:

		Zombie( void );
		~Zombie( void );

		void	setName( std::string name );
		void	announce( void );

	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
