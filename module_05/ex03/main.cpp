/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:38:48 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/05 14:38:20 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"

int	main( void )
{
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned( grade );
		grade.executeForm( *rrf );
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned( grade );
		rrf->execute( grade );
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned( grade );
		rrf->execute( grade );
		delete rrf;
	}
	std::cout << std::endl;
	try	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm(" creation", "Bender");
		delete rrf;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm(" creation", "");
		delete rrf;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
