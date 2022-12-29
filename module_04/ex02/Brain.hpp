/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:38:43 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/12/27 16:17:48 by lpaulo-d         ###   ########.fr       */
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

		void setIdeas ( int index, std::string idea );
		std::string getIdeas( int index );

	private:
		std::string _ideas[100];
};

#endif
