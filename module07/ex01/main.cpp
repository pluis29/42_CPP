/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:15:41 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/07 16:49:32 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void ) {
	char	str[] = "OTXMANOSP";
	float	arrfloat[] = { 42.21, 21.42, 12.24};
	int		arrint[] = { 24, 42, 21};

	std::cout << "String before     : ";
	whatever_print(str, strlen(str));
	iter(str, 10, increment<char>);
	std::cout << "String after      : ";
	whatever_print(str, strlen(str));

	std::cout << "Float array before: ";
	whatever_print(arrfloat, 3);
	iter(arrfloat, 3, increment<float>);
	std::cout << "Float array after : ";
	whatever_print(arrfloat, 3);

	std::cout << "Int array before  : ";
	whatever_print(arrint, 3);
	iter(arrint, 3, increment<int>);
	std::cout << "Int array after   : ";
	whatever_print(arrint, 3);

	return 0;
}

//class Awesome
//{
//  public:
//    Awesome( void ) : _n( 42 ) { return; }
//    int get( void ) const { return this->_n; }
//  private:
//    int _n;
//};

//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

//template< typename T >
//void print( T const & x ) { std::cout << x << std::endl; return; }

//int main() {
//  int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//  Awesome tab2[5];

//  iter( tab, 5, print<int> );
//  iter( tab2, 5, print<Awesome> );

//  return 0;
//}