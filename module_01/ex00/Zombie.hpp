/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:57:31 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/22 21:40:45 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {
	public:

		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );

		Zombie*	newZombie( std::string name );
		void	randomChump( std::string name );

	private:
		std::string	_name;
};

#endif
