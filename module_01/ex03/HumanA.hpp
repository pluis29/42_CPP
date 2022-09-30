/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:07:25 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/24 21:44:54 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMAN_A_HPP
# define	HUMAN_A_HPP

#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA( std::string name, Weapon& type );
		~HumanA( void );

		void	attack( void );

	private:
		std::string	_name;
		Weapon&		_type;
};

#endif
