/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:59:19 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/21 23:45:50 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::set_firstName()
{
	std::string	user_firstName;

	do {
		std::cout << "First Name: ";
		std::getline(std::cin, user_firstName);
		if (user_firstName.length() < 2 || isAlpha(user_firstName) == false)
			std::cout << "Incorrect input,must be a real name" << std::endl;
		else
			break ;
	} while (true);
	this->_firstName = user_firstName;
	user_firstName.clear();
	return ;
}

void	Contact::set_lastName()
{
	std::string	user_lastName;

	do {
		std::cout << "Last Name: ";
		std::getline(std::cin, user_lastName);
		if (user_lastName.length() < 2 || isAlpha(user_lastName) == false)
			std::cout << "Incorrect input,must be a real name" << std::endl;
		else
			break ;
	} while (true);
	this->_lastName = user_lastName;
	user_lastName.clear();
	return ;
}

void	Contact::set_nickname()
{
	std::string	user_nickname;

	do {
		std::cout << "Nickname: ";
		std::getline(std::cin, user_nickname);
		if (user_nickname.length() < 1)
			std::cout << "Incorrect input, can't be empty" << std::endl;
		else
			break ;
	} while (true);
	this->_nickname = user_nickname;
	user_nickname.clear();
	return ;
}

void	Contact::set_phoneNumber()
{
	std::string	user_phoneNumber;

	do {
		std::cout << "Phone number: ";
		std::getline(std::cin,user_phoneNumber);
		if (user_phoneNumber.length() < 1 || isNumber(user_phoneNumber) == false)
			std::cout << "Incorrect input, must be phone number" << std::endl;
		else
			break ;
	} while (true);
	this->_phoneNumber = user_phoneNumber;
	user_phoneNumber.clear();
	return ;
}

void	Contact::set_darkSecret()
{
	std::string	user_darkSecret;

	do {
		std::cout << "Dark secret: ";
		std::getline(std::cin,user_darkSecret);
		if (user_darkSecret.length() <= 0)
			std::cout << "Incorrect input, can't be empty" << std::endl;
		else
			break ;
	} while (true);
	this->_darkSecret = user_darkSecret;
	user_darkSecret.clear();
	return ;
}

/* AUX */
bool	Contact::isAlpha(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]) || str[i] == ' ')
			continue ;
		else
			return (false);
	}
	return (true);
}

bool	Contact::isNumber(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]) || str[i] == '+' || str[i] == '-' || str[i] == ' ')
			continue ;
		else
			return (false);
	}
	return (true);
}

void	Contact::print_Header()
{
	std::cout << std::right <<
		'|' << std::setw(10) << "index" <<
		'|' << std::setw(10) << "first name" <<
		'|' << std::setw(10) << "last name" <<
		'|' << std::setw(10) << "nickname" <<
		'|' << std::endl;
	return ;
}

void	Contact::print_Contact()
{
	std::cout << std::right <<
		'|' << std::setw(10) << this->index <<
		'|' << std::setw(10) << squeeze_toFit(this->_firstName) <<
		'|' << std::setw(10) << squeeze_toFit(this->_lastName) <<
		'|' << std::setw(10) << squeeze_toFit(this->_nickname) <<
		'|' << std::endl;
	return ;
}

std::string	Contact::squeeze_toFit(std::string str)
{
	std::string	newStr_return;

	if (str.length() > 10)
	{
		newStr_return = str.substr(0, 10);
		newStr_return[9] = '.';
		return (newStr_return);
	}
	return (str);
}

void	Contact::print_ContactID()
{
	std::cout << std::endl;
	std::cout << "Index: " << this->index << std::endl;
	std::cout << "FirstName: " << this->_firstName << std::endl;
	std::cout << "LastName: " << this->_lastName << std::endl;
	std::cout << "NickName: " << this->_nickname << std::endl;
	std::cout << "Number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest: " << this->_darkSecret << std::endl;
}
