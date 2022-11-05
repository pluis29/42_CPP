/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:38:43 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 20:31:19 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>
#include <cmath>
//#include <cstdlib>

class Brain {
	public:
		Brain( void );
		Brain( Brain const& brain_instance );
		~Brain( void );
		Brain& operator=( Brain const& brain_instance );

		void getIdea( int i ) const;

	private:
		std::string _ideas[100];
};

#endif
