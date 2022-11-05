/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:19:40 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/02 00:55:37 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FRAG_TRAP_HPP_
#define		FRAG_TRAP_HPP_

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( const FragTrap& ft_instance );
		FragTrap( std::string const& name );
		~FragTrap( void );

		FragTrap & operator=( const FragTrap& ft_instance );

		void	highFivesGuys( void );
};

#endif
