/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:38:48 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 23:40:10 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main( void )
{
	std::cout << std::endl;
	try {
		Bureaucrat gradeGood = Bureaucrat("Art", 1);
		std::cout << gradeGood;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeBad = Bureaucrat("Art", 151);
		std::cout << gradeBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeBad = Bureaucrat("Art", 0);
		std::cout << gradeBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeGood = Bureaucrat("Art", 1);
		std::cout << gradeGood;
		gradeGood.incrementGrade();
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeGood = Bureaucrat("Art", 150);
		std::cout << gradeGood;
		gradeGood.decrementGrade();
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeBad = Bureaucrat("Art", -30);
		std::cout << gradeBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return ( 0 );
}
