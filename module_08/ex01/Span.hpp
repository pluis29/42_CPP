/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:52:52 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/08 14:58:43 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP_
#define	SPAN_HPP_

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const& instance);
		~Span(void);
		Span& operator=(Span const& instance);

		void	addNumber( int n );
		void	addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );
		int		shortestSpan( void );
		int		longestSpan( void );

		class FullException : public std::exception {
			virtual const char* what() const throw();
		};
		class EmptyException : public std::exception {
			virtual const char* what() const throw();
		};

	private:
		std::vector<int>	_numbers;
		unsigned int		_N;
};

#endif
