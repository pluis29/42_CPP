/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:24:48 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/10/03 10:32:23 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	Harl harl_instance;

	std::cout << "----TEST DEBUG----" << std::endl;
	harl_instance.complain("DEBUG");

	std::cout << "\n----TEST INFO----" << std::endl;
	harl_instance.complain("INFO");

	std::cout << "\n----TEST WARNING----" << std::endl;
	harl_instance.complain("WARNING");

	std::cout << "\n----TEST ERROR----" << std::endl;
	harl_instance.complain("ERROR");

	return ( true );
}
