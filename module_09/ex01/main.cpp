/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:43:37 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/23 13:30:53 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main( int ac, char **av ) {
	if ( ac != 2 ){
		std::cout << "Error in argument input" << std::endl;
		return 1;
	}
	if ( rpn(av[1]) == false ) {
		return 1;
	}
	return 0;
}
