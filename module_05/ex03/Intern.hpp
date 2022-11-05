/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:34:23 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/05 14:36:36 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP_
#define INTERN_HPP_

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern( void );
		Intern( Intern const & rhs );
		~Intern();
		Intern& operator=( Intern const & rhs );

		Form* makeForm( std::string formName, std::string target );
		class FormUnknown : public std::exception {
			virtual const char* what( void ) const throw();
		};
		class NoTarget : public std::exception {
			virtual const char* what( void ) const throw();
		};

	private:
		Form* _presidential( std::string target );
		Form* _robotomy( std::string target );
		Form* _shrubbery( std::string target );
		Form* _unknown( std::string target );
};

#endif
