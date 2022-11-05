/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:20:52 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 23:45:14 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name( name ) {
	std::cout << "[Bureaucrat] Default constructor called" << std::endl;

	if ( grade < 1 )
		throw Bureaucrat::GradeTooHighException();
	else if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "[Bureaucrat] Default destructor called" << std::endl;
	return ;
}

std::string Bureaucrat::getName( void ) const{
	return ( this->_name );
}

unsigned int Bureaucrat::getGrade( void ) const{
	return ( this->_grade );
}

void Bureaucrat::incrementGrade( void ) {
	if ( this->_grade == 1 )
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade( void ) {
	if ( this->_grade == 150 )
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return ( "Bureaucrat grade is to high!!" );
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return ( "Bureaucrat grade is to low!!" );
}

std::ostream & operator<<( std::ostream& o, Bureaucrat const & rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return ( o );
}
