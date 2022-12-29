/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:27:34 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/12/29 13:49:25 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

void	brains(void) {
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();

		std::cout << std::endl;

		delete j;//should not create a leak
		delete i;
	}
	
	std::cout << std::endl;
	
	{
		int len = 4;
		AAnimal **Aanimals = new AAnimal*[len];
		
		for (int i = 0; i < len; i++) {
			if (i >= len / 2)
				Aanimals[i] = new Dog();
			else
				Aanimals[i] = new Cat();
		}
		
		std::cout << std::endl;

		for (int i = 0; i < len; i++) {
			delete Aanimals[i];
		}
		
		delete [] Aanimals;
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


int		main(void) {
	brains();
	deep_or_shallow();
	// AAnimal *a = new AAnimal();
	return (0);
}