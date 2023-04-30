/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:54:55 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/22 22:14:56 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int ac, char **av ){
	if (ac < 2){
		std::cout << "Wrong usage" << std::endl;
		return 1;
	}
	if (CheckAv(ac, av) == false) {
		return 1;
	}
	pmerge(ac, av);
	return 0;
}
