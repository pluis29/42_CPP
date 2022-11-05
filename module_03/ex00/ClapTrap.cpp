/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:09:26 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/01 22:45:29 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap( void ) : _name(""), _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "Constructor called (void)" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const& name ) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "Constructor called (name)" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const& ct_instance ) : _name(""), _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "Copy constructor called" << std::endl;
	*this = ct_instance;
	return ;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ct_instance) {
	std::cout << "Assignment operator called" << std::endl;
	this->_name = ct_instance._name;
	this->_hit_points = ct_instance._hit_points;
	this->_energy_points = ct_instance._energy_points;
	this->_attack_damage = ct_instance._attack_damage;
	return *this;
}

void ClapTrap::attack( const std::string& target ) {
	std::cout << "ClapTrap " << this->_name;

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

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name;
	if ( this->_hit_points <= 0 ) {
		std::cout << "is dead" << std::endl;
		return ;
	}
	this->_hit_points -= amount;
	std::cout << " Recived the attack";
	if ( this->_hit_points <= 0 ) {
		std::cout << "is dead" << std::endl;
		return ;
	}
	std::cout << ", health points: " << this->_hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name;

	if ( this->_hit_points <= 0 ) {
		std::cout << "is dead" << std::endl;
		return ;
	}
	if ( this->_energy_points <= 0 ) {
		std::cout << "does not have enough energy points to be repaired" << std::endl;
		return ;
	}
	this->_energy_points--;
	this->_hit_points += amount;
	std::cout << "It is repaired in " << amount << " now have "
		<< this->_hit_points << " healt points" << std::endl;
}
