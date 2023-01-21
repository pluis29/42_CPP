/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:37:01 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/01/08 19:21:49 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP_
#define	MUTANTSTACK_HPP_

#include <iostream>
#include <deque>
#include <stack>

template<typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container> {
	public:

		MutantStack(void) {
			return ;
		};
		MutantStack(MutantStack const& instance) : std::stack<T, container>(instance) {
			return ;
		};
		~MutantStack(void) {
			return ;
		};
		MutantStack& operator=(MutantStack const& instance) {
			this->c = instance.c;
			return *this;
		};

		typedef typename container::iterator iterator;
		iterator begin(void){
			return this->c.begin();
		};
		iterator end(void){
			return this->c.end();
		};

};

#endif
