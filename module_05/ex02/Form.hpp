/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:04:41 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/05 11:55:25 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FORM_HPP_
#define		FORM_HPP_

#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>
#include <exception>

class Bureaucrat;

class Form {
	public:
		Form ( void );
		Form( std::string name, int gradeRequired, int gradeExec );
		Form( Form const& form_instace );
		virtual ~Form( void );
		Form& operator=( Form const& form_instace );

		std::string	getName( void ) const;
		int			getGradeRequired( void ) const;
		int			getGradeExec( void ) const;
		bool		getSigned( void ) const;
		void		beSigned( Bureaucrat const& bureaucrat );

		class GradeTooHighException : public std::exception {
			virtual const char* what( void ) const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what( void ) const throw();
		};


		//!!!!!!
		bool			mayExecute( Bureaucrat const& executor ) const;
		virtual void	execute( Bureaucrat const& executor ) const = 0;
		class FormNotSignedException : public std::exception {
			virtual const char* what( void ) const throw();
		};


	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_gradeRequired;
		const unsigned int	_gradeExec;
};

std::ostream& operator<<(std::ostream& o, Form const& form_instance);

#endif
