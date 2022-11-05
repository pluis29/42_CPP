/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:43:56 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/02 00:52:30 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "[ ScavTrap ] Constructor called (void)" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string const& name ) : ClapTrap( name ) {
	std::cout << "[ ScavTrap ] Constructor called (name)" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const& st_instance ) : ClapTrap( st_instance ) {
	std::cout << "[ ScavTrap ] Copy constructor called" << std::endl;
	*this = st_instance;
	return ;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "[ ScavTrap ] Destructor called" << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &st_instance) {
	std::cout << "[ ScavTrap ] Assignment operator called" << std::endl;
	this->_name = st_instance._name;
	this->_hit_points = st_instance._hit_points;
	this->_energy_points = st_instance._energy_points;
	this->_attack_damage = st_instance._attack_damage;
	return *this;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in Gate kepper mode." << std::endl;
}

void ScavTrap::attack( const std::string& target ) {
	std::cout << "ScavTrap " << this->_name;

	if ( this->_hit_points <= 0 ) {
		std::cout << "is dead" << std::endl;
		return ;
	}
	if ( this->_energy_points <= 0 ) {
		std::cout << "does not have enough energy points to attack" << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << " attacks " << target << " , causing " << this->_attack_damage
		<< " points of damage!" << std::endl;
}
