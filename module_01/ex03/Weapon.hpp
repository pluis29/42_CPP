/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:44:25 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/24 21:46:09 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WEAPON_HPP
# define	WEAPON_HPP

#include <iostream>

class	Weapon {
	public:
		Weapon( std::string type );
		~Weapon( void );

		std::string&	getType( void );
		void			setType( std::string type );

	private:
		std::string	_type;
};

#endif
