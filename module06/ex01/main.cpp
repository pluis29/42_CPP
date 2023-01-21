/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:14:58 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/04 12:46:33 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t	serialize( Data* ptr );
Data*		deserialize( uintptr_t raw );

int	main( void ) {
	uintptr_t	raw;
	Data		data;
	Data*		data_ptr;

	data.value = 42;
	std::cout << "Data address: " << &data << std::endl;

	raw = serialize(&data);
	std::cout << "Serialize address: " << raw << std::endl;

	data_ptr = deserialize(raw);
	std::cout << "Deserialize address: " << data_ptr << std::endl;
	return 0;
}

uintptr_t	serialize( Data* ptr ) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize( uintptr_t raw ) {
	return reinterpret_cast<Data*>(raw);
}
