/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:39:40 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/05 12:49:03 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "ShrubberyForm", 145, 137 ), _target( "Ze" )  {
	std::cout << "[ShrubberyCreationForm] Default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: Form( "ShrubberyForm", 145, 137 ), _target( target )  {
		std::cout << "[ShrubberyCreationForm] Constructor called" << std::endl;
		return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const& s_instance )
	: Form( "ShrubberyForm", 145, 137 ) {
		std::cout << "[ShrubberyCreationForm] Copy constructor called" << std::endl;
		*this = s_instance;
		return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "[ShrubberyCreationForm] Destructor Form called" << std::endl;
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const& s_instance ) {
	this->_target = s_instance._target;
	return *this;
}

void ShrubberyCreationForm::execute( Bureaucrat const& executor ) const {
	if ( this->mayExecute( executor ) == false )
		return ;
	std::string name_file = this->_target + "_shrubbery";
	std::ofstream file;
	file.open( name_file.c_str(), std::ofstream::out | std::ofstream::trunc );
	if ( !file.is_open() ){
		std::cout << "Something wrong creating the _shrubbery file" << std::endl;
		file.close();
		return ;
	}

	file << "           ,@@@@@@@,\n"
		<< "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		<< "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
		<< "       |o|        | |         | |\n"
		<< "       |.|        | |         | |\n"
		<< "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
	file.close();
	std::cout << "ASCII trees created" << std::endl;
	return ;
}
