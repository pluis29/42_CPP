/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:59:57 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/21 23:47:07 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_id = 0;
	this->_size = 0;

	std::cout << "Opening the PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Closing the PhoneBook" << std::endl;
}

void	PhoneBook::Add_New_Contact()
{
	if (this->_id <= 7)
		this->_id++;
	else
		this->_id = 1;

	this->_contact[this->_id].index = this->_id;
	this->_contact[this->_id].set_firstName();
	this->_contact[this->_id].set_lastName();
	this->_contact[this->_id].set_nickname();
	this->_contact[this->_id].set_phoneNumber();
	this->_contact[this->_id].set_darkSecret();
	if (this->_size < 8)
		this->_size++;
	return ;
}

void	PhoneBook::search_Contact()
{
	std::string	user_input;
	int			index;


	print_AllContacts();
	do {
		std::cout << "Index: ";
		std::getline(std::cin, user_input);
		index = check_index(user_input);
		if (index == false)
		{
			std::cout << "Choose a valid index" << std::endl;
		}
		else
			break ;
	} while (true);
	std::cout << index << std::endl;
	this->_contact[index].print_ContactID();
	return ;
}

int	PhoneBook::check_index(std::string user_input)
{
	int	converted;

	if (user_input.length() == 1)
	{
		converted = atoi(user_input.c_str());
		if (converted >= 1 && converted <= this->_size)
			return (converted);
	}
	return (false);
}

void	PhoneBook::print_AllContacts()
{
	this->_contact[0].print_Header();
	for (int i = 1; i <= this->_size; i++)
		this->_contact[i].print_Contact();
	return ;
}
