/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:20:25 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/08 12:48:38 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main( void ) {
	{
		int myArray[5] = { 5, 10, 15, 20, 25 };
		std::vector<int> vec(myArray, myArray + sizeof(myArray) / sizeof(int) );
		std::vector<int>::iterator nbr;
		try {
			nbr = easyfind( vec, 15 );
			std::cout << "Number: " << *nbr << std::endl;
		}catch ( std::exception& e ){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::vector<int> myVector ( 10 );
		std::vector<int>::size_type n = myVector.size();

		for (unsigned i = 0; i < n; i++) {
			myVector[i] = i;
			std::cout << ' ' << myVector[i];
		}
		std::cout << std::endl;

		std::vector<int>::iterator nbr;
		try {
			nbr = easyfind( myVector, 0 );
			std::cout << "Number: " << *nbr << std::endl;
		}catch ( std::exception& e ){
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
