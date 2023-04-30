/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:47:08 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/23 13:32:55 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	rpn( char *rpnString ){
	std::stack<int> stack;
	int	actual, previous;

	for ( int i = 0; rpnString[i]; i++ ){
		actual = checkChar( rpnString[i] );
		if (actual == ERROR){
			return false;
		}
		if ( actual != SPACE && previous != SPACE && i != 0 ){
			std::cout << "Error input must be separate by space" << std::endl;
			return false;
		}
		switch (actual) {
			case NUMBER:
				stack.push(rpnString[i] - '0');
				break;
			case OPERATOR:
				if (stackMath(stack, rpnString[i]) == false){
					return false;
				}
				break;
			default: break;
		}
		previous = actual;
	}

	if ( stack.size() != 1 ){
		std::cout << "Wrong expression" << std::endl;
		return false;
	}
	std::cout << stack.top() << std::endl;
	return true;
}

int	checkChar( char av ) {
	if ( av >= '0' && av <= '9' )
		return NUMBER;
	if ( av == '*' || av == '/' || av == '+' || av == '-')
		return OPERATOR;
	if ( av == ' ' )
		return SPACE;
	else {
		std::cout << "Error" << std::endl;
		return ERROR;
	}
	return 1;
}

bool	stackMath( std::stack<int> &stack, char av ){
	if (stack.size() < 2){
		std::cout << "Wrong expression" << std::endl;
		return false;
	}

	int	last, penult;

	last = stack.top();
	stack.pop();
	penult = stack.top();
	stack.pop();
	switch(av){
		case ('*'):
			stack.push(penult * last);
			break;
		case ('-'):
			stack.push(penult - last);
			break;
		case ('/'):
			stack.push(penult / last);
			break;
		case ('+'):
			stack.push(penult + last);
			break;
	}
	return true;
}
