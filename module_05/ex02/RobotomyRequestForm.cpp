/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:27:21 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/05 12:49:15 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "RobotomyForm", 72, 45 ), _target( "Ze" )  {
	std::cout << "[RobotomyRequestForm] Default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
	: Form( "RobotomyForm", 72, 45 ), _target( target )  {
		std::cout << "[RobotomyRequestForm] Constructor called" << std::endl;
		return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const& robo_instance )
	: Form( "RobotomyForm", 72, 45 ) {
		std::cout << "[RobotomyRequestForm] Copy constructor called" << std::endl;
		*this = robo_instance;
		return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "[RobotomyRequestForm] Destructor Form called" << std::endl;
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const& robo_instance ) {
	this->_target = robo_instance._target;
	return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const& executor ) const {
	if ( this->mayExecute( executor ) == false )
		return ;

	std::cout << "ZZZZZZZZ BZZZZZZZZZ" << std::endl;
	srand(time(NULL));

	if ( rand() % 2 )
		std::cout << "The " << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy of " << this->_target << " failed" << std::endl;
	return ;
}
