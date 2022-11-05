/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:38:48 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/05 13:00:10 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int	main( void )
{
	std::cout << std::endl;
	std::cout << "Execução Shrubberry! " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try {
		std::cout << "Esse vai da bom!" << std::endl;
		ShrubberyCreationForm form("Art");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		form.beSigned(grade);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Esse vai da bom!" << std::endl;
		ShrubberyCreationForm form("Grey");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		form.beSigned(grade);
		grade.executeForm( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Esse vai da ruim!" << std::endl;
		ShrubberyCreationForm form("Tess");
		Bureaucrat grade = Bureaucrat("Grey", 150);
		form.beSigned(grade);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Esse vai da ruim!" << std::endl;
		ShrubberyCreationForm form("Grey");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Esse vai da ruim!" << std::endl;
		ShrubberyCreationForm form("Grey");
		Bureaucrat grade = Bureaucrat("Grey", 150);
		form.beSigned(grade);
		grade.executeForm( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Execução Robotomy! " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try {
		std::cout << "Esse talvez vai da bom!" << std::endl;
		RobotomyRequestForm form("Robo");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		form.beSigned(grade);
		grade.executeForm( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Esse talvez vai da bom!" << std::endl;
		RobotomyRequestForm form("Robo");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		form.beSigned(grade);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Esse vai da ruim!" << std::endl;
		RobotomyRequestForm form("Robo");
		Bureaucrat grade = Bureaucrat("Grey", 150);
		form.beSigned(grade);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Esse vai da ruim!" << std::endl;
		RobotomyRequestForm form("Robo");
		Bureaucrat grade = Bureaucrat("Grey", 150);
		form.beSigned(grade);
		grade.executeForm( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Execução Presidential! " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	try {
		std::cout << "Esse vai da bom!" << std::endl;
		PresidentialPardonForm form("Pardon");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		form.beSigned(grade);
		grade.executeForm( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Esse vai da bom!" << std::endl;
		PresidentialPardonForm form("Pardon");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		form.beSigned(grade);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Esse vai da ruimmm!" << std::endl;
		PresidentialPardonForm form("Pardon");
		Bureaucrat grade = Bureaucrat("Grey", 150);
		form.beSigned(grade);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
		try {
		std::cout << "Esse vai da ruimmm!" << std::endl;
		PresidentialPardonForm form("Pardon");
		Bureaucrat grade = Bureaucrat("Grey", 150);
		form.beSigned(grade);
		grade.executeForm( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	return ( 0 );
}