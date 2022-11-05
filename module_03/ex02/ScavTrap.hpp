/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:43:57 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/02 00:08:21 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAV_TRAP_HPP_
#define		SCAV_TRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string const& name );
		ScavTrap( ScavTrap const& st_instance );
		~ScavTrap( void );

		ScavTrap& operator=( ScavTrap const& st_instance );

		void	attack( const std::string&  target );
		void	guardGate();
};

#endif
