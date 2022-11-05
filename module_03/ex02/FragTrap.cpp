/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:19:39 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/02 00:55:31 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << "[ FragTrap ] Constructor called (void)" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string const& name ) : ClapTrap( name ) {
	std::cout << "[ FragTrap ] Constructor called (name)" << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const& ft_instance ) : ClapTrap( ft_instance ) {
	std::cout << "[ FragTrap ] Copy constructor called" << std::endl;
	*this = ft_instance;
	return ;
}

FragTrap::~FragTrap( void ) {
	std::cout << "[ FragTrap ] Destructor called" << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(const FragTrap &ft_instance) {
	std::cout << "[ FragTrap ] Assignment operator called" << std::endl;
	this->_name = ft_instance._name;
	this->_hit_points = ft_instance._hit_points;
	this->_energy_points = ft_instance._energy_points;
	this->_attack_damage = ft_instance._attack_damage;
	return *this;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " wants HighFivesGuys!" << std::endl;
}
