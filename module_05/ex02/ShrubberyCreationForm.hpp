/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:39:41 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/05 13:00:16 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP_
#define SHRUBBERY_CREATION_FORM_HPP_

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & s_instance );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm& operator=( ShrubberyCreationForm const& s_instance );

		void	execute( Bureaucrat const& executor ) const;

	private:
		std::string	_target;
};

#endif
