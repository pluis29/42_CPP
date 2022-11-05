/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:04:37 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/05 00:38:37 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name("Inacio"), _signed( false ), _gradeRequired( 150 ), _gradeExec( 150 ) {
	std::cout << "[Form] Default constructor called" << std::endl;
	return ;
}

Form::Form( std::string name, int gradeRequired, int gradeExec ) : _name( name),
	_signed( false ), _gradeRequired( gradeRequired ), _gradeExec( gradeExec) {
	std::cout << "[Form] Constructor called" << std::endl;
	if ( this->_gradeExec < 1 || this->_gradeRequired < 1 )
		throw Form::GradeTooHighException();
	else if (this->_gradeExec > 150 || this->_gradeRequired > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form( void ) {
	std::cout << "[Form] Default destructor Form called" << std::endl;
	return ;
}

Form::Form( Form const& form_instance )
	: _name( form_instance.getName() ), _signed( form_instance.getSigned() ),
	_gradeRequired( form_instance.getGradeRequired() ), _gradeExec( form_instance.getGradeExec() ){
	std::cout << "[Form] Copy constructor Bureaucrat called" << std::endl;
	*this = form_instance;
	return ;
}



Form & Form::operator=( Form const & rhs ) {
	std::cout << "copy operator Form called" << std::endl;
	this->_signed = rhs.getSigned();
	return ( *this );
}

const char* Form::GradeTooHighException::what( void ) const throw() {
	return ( "Grade is to high!!" );
}

const char* Form::GradeTooLowException::what( void ) const throw() {
	return ( "Grade is to low!!" );
}

std::string	Form::getName( void ) const {
	return ( this->_name );
}

int			Form::getGradeRequired( void ) const {
	return ( this->_gradeRequired );
}

int			Form::getGradeExec( void ) const {
	return ( this->_gradeExec );
}

bool		Form::getSigned( void ) const {
	return ( this->_signed );
}

void		Form::beSigned( Bureaucrat const & bureaucrat ) {
	if (bureaucrat.getGrade() <= this->_gradeRequired)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<( std::ostream& o, Form const& form_instance ) {
	o << "Name: " << form_instance.getName() << std::endl;
	o << "Signed: " << form_instance.getSigned() << std::endl;
	o << "Grade Exec: " << form_instance.getGradeExec() << std::endl;
	o << "Grade required: " << form_instance.getGradeRequired() << std::endl;
	return ( o );
}
