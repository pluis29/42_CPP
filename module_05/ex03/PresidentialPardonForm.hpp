/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:06:57 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/05 13:00:23 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP_
#define PRESIDENTIAL_PARDON_FORM_HPP_

#include "Form.hpp"

class PresidentialPardonForm: public Form {

	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const& ppf_instance );
		~PresidentialPardonForm( void );
		PresidentialPardonForm& operator=( PresidentialPardonForm const& ppf_instance );

		void execute( Bureaucrat const& executor ) const;

	private:
		std::string	_target;
};

#endif
