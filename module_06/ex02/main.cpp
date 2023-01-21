/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:50:52 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/04 13:25:11 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate( void );
void	identify( Base *p );
void	identify( Base &p );

int	main( void ) {
	srand (time(NULL));
	{
		Base *base = generate();
		std::cout << "Base &p:  ";
		identify(*base);
		delete base;
	}
	{
		Base *base = generate();
		std::cout << "Base *p:  ";
		identify(base);
		delete base;
	}
	{
		Base *base = new Base();
		std::cout << "Base *p:  ";
		identify(base);
		delete base;
	}
	return 0;
}

Base*	generate( void ) {
	int	num = std::rand() % 3;

	if ( num == 0 )
		return new A();
	else if ( num == 1 )
		return new B();
	else
		return new C();
}

void	identify( Base *p ) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Not found" << std::endl;
}

void	identify( Base &p ) {
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void) a;
	} catch (...) {}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void) b;
	} catch (...) {}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void) c;
	} catch (...) {}
}
