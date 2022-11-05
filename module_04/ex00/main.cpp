/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:27:34 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/11/04 19:18:17 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;
	std::cout << "WRONG ONE:" << std::endl;
	const WrongAnimal* wrong1 = new WrongAnimal();
	const WrongAnimal* wrong2 = new WrongCat();
	std::cout << std::endl;
	std::cout << wrong1->getType() << " " << std::endl;
	wrong1->makeSound();
	wrong2->makeSound();
	std::cout << std::endl;
	delete wrong1;
	delete wrong2;

	return 0;
}
