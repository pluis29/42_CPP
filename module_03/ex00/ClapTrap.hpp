/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:46:16 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/01 22:13:17 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CLAP_TRAP_HPP_
#define		CLAP_TRAP_HPP_

#include <iostream>

class ClapTrap {

	public:
		ClapTrap( void );
		ClapTrap( std::string const& name );
		ClapTrap( ClapTrap const& ct_instance );
		~ClapTrap( void );

		ClapTrap& operator=( ClapTrap const& ct_instance );

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

	private:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
};

#endif
