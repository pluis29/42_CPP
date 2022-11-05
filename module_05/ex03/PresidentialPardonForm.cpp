/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:10:20 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/05 12:49:33 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form( "PresidentialForm", 25, 5 ), _target( "Ze" )  {
	std::cout << "[PresidentialPardonForm] Default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
	: Form( "PresidentialForm", 25, 5 ), _target( target )  {
		std::cout << "[PresidentialPardonForm] Constructor called" << std::endl;
		return ;
}


PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const& ppf_instance )
	: Form( "PresidentialForm", 25, 5 ) {
		std::cout << "[PresidentialPardonForm] Copy constructor called" << std::endl;
		*this = ppf_instance;
		return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "[PresidentialPardonForm] Destructor Form called" << std::endl;
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const& ppf_instance ) {
	this->_target = ppf_instance._target;
	return *this;
}

void PresidentialPardonForm::execute( Bureaucrat const& executor ) const {
	if ( this->mayExecute( executor ) == false )
		return ;
	std::cout << this->_target << " has been pardoned by Zephod Beeblebrox!" << std::endl;
	return ;
}
