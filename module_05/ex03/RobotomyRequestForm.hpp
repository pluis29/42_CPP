/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:27:21 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/05 13:00:20 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP_
#define ROBOTOMY_REQUEST_FORM_HPP_

#include "Form.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const& robo_instance );
		~RobotomyRequestForm( void );
		RobotomyRequestForm & operator=( RobotomyRequestForm const& robo_instance );

		void	execute( Bureaucrat const & executor ) const;

	private:
		std::string	_target;

};

#endif
