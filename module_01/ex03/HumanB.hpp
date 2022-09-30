/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:32:50 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/24 21:53:03 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMAN_B_HPP
# define	HUMAN_B_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB( std::string name );
		~HumanB( void );

		void	setWeapon( Weapon& type );
		void	attack( void );

	private:
		std::string	_name;
		Weapon*		_type;
};

#endif
