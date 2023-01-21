/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:35:15 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/04 12:37:53 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SERIALIZE_HPP_
# define	SERIALIZE_HPP_

#include <iostream>
#include <stdint.h>

typedef struct s_data {
	int	value;
} Data;

uintptr_t	serialize( Data* ptr );
Data*		deserialize( uintptr_t raw );

#endif
