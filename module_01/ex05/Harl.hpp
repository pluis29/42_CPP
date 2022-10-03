/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:26:20 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/10/03 10:06:06 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HARL_H
# define	HARL_H

# include "iostream"

class	Harl
{
	public:
		Harl( void );
		~Harl( void );

		void	complain( std::string level );

	private:
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
};

#endif
