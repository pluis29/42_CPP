/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:01:42 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/22 22:14:36 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_MERGE_ME_HPP_
#define P_MERGE_ME_HPP_

#include	<iostream>
#include	<vector>
#include	<deque>
#include	<time.h>
#include	<iterator>
#include	<set>

void	pmerge(int ac, char **av);
bool	CheckAv(int ac, char **av);
bool	unique_numbers(char **av);
void	print_output(char **av, std::vector<int> vector_sorted, double vector_time, std::deque<int> deque_sorted, double deque_time);
void	print_unsorted(char **av);
void	print_sorted(std::vector<int> vector_sorted);
void	print_times(std::vector<int> vector_sorte, double vector_sorted, std::deque<int> deque_sorted, double deque_time);

std::vector<int>	vector_container(int ac, char **av);
std::deque<int>	deque_container(int ac, char **av);

template <typename Container>
void	av_convertion(int ac, char **av, Container &stack);

template <typename Container>
void	sort(Container &stack, int start, int end);

template <typename Container>
void	merge(Container &stack, int start, int mid, int end);

#endif
