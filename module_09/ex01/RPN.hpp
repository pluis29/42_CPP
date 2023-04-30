/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:47:17 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/23 13:31:50 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP_
#define RPN_HPP_

#include <iostream>
#include <stack>

#define NUMBER 1
#define OPERATOR 2
#define SPACE 3
#define ERROR 5

bool	rpn( char *rpnString );
int		checkChar( char av );
bool	stackMath( std::stack<int> &stack, char av );

#endif
