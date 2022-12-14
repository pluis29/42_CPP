/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:27:34 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/12/27 16:34:01 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

void	brains(void) {
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;//should not create a leak
		delete i;
	}

	std::cout << std::endl;
	{
		int len = 4;
		Animal **animals = new Animal*[len];
		
		for (int i = 0; i < len; i++) {
			if (i >= len / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << std::endl;
		for (int i = 0; i < len; i++) {
			delete animals[i];
		}
		delete [] animals;
	}
	std::cout << std::endl;
}

void	deep_or_shallow(void) {
	Cat* Cat1 = new Cat();
	std::cout << std::endl;

	Cat1->setIdeas(0, "test 1");
	std::cout << "Idea 1 = " << Cat1->getIdeas(0) << "\n";


	Cat* Cat2 = new Cat(*Cat1);

	std::cout << "Idea 2 = " << Cat2->getIdeas(0) << "\n";
	Cat2->setIdeas(0, "TESTE 2");
	std::cout << std::endl;


	std::cout
		<< "final idea 1 = " << Cat1->getIdeas(0) << std::endl
		<< "final idea 2 = " << Cat2->getIdeas(0) << std::endl;

	delete Cat1;
	delete Cat2;
}

int	main(void) {
	brains();
	deep_or_shallow();
	return (0);
}