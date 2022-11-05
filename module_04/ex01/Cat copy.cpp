/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:40:23 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 20:35:43 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Cat.hpp"

//Cat::Cat( void )  {
//	this->_type = "Cat";
//	std::cout << "[Cat] default constructor called" << std::endl;
//	return ;
//}

//Cat::Cat( const Cat& cat_instance ) : Animal( cat_instance ){
//	*this = cat_instance;
//	std::cout << "[Cat] copy constructor called" << std::endl;
//	return ;
//}

//Cat& Cat::operator=( const Cat &cat_instance ) {
//	std::cout << "[Cat] copy assignment operator called" << std::endl;
//	this->_type = cat_instance._type;
//	return *this;
//}

//Cat::~Cat( void ) {
//	std::cout << "[Cat] Destructor called" << std::endl;
//}

//void	Cat::makeSound( void ) const {
//	std::cout << "Minhau" << std::endl;
//	return ;
//}

//Brain* Cat::getBrain() const
//{
//	return this->_brain;
//}

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
    std::cout << "[Cat] default constructor called" << std::endl;
    this->_type = "Cat";

    this->_brain = new Brain();
}

Cat::Cat(const Cat& src) : Animal(src)
{
    std::cout << "[Cat] copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
    std::cout << "[Cat] " << this->_type << " destroyed" << std::endl;
    delete this->_brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat& Cat::operator=(Cat const& rhs)
{
    if (this != &rhs) {
        this->_type = rhs.getType();
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

Brain* Cat::getBrain() const
{
    return this->_brain;
}