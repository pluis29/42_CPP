/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:51:14 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/21 15:33:44 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int	main(int ac, char **av)
{
	char	c;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int x = 1; av[x] != NULL; x++)
		{
			for (int y = 0; av[x][y] != '\0'; y++)
			{
				c = toupper(av[x][y]);
				std::cout << c;
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
