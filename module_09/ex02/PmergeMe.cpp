/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:04:07 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/22 22:14:23 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	pmerge(int ac, char **av){

	std::vector<int>	vector_sorted;
	std::deque<int>		deque_sorted;
	clock_t				start, end;
	double				vector_time, deque_time;

	start = clock();
	vector_sorted = vector_container(ac, av);
	end = clock();
	vector_time = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1e6;

	start = clock();
	deque_sorted = deque_container(ac, av);
	end = clock();
	deque_time = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1e6;
	print_output(av, vector_sorted, vector_time, deque_sorted, deque_time);
	return ;
}

void	print_output(char **av, std::vector<int> vector_sorted, double vector_time, std::deque<int> deque_sorted, double deque_time){
	print_unsorted(av);
	print_sorted(vector_sorted);
	print_times(vector_sorted, vector_time, deque_sorted, deque_time);
}

void	print_unsorted(char **av) {
	std::cout << "Before: ";
	for (int i = 1; av[i]; i++)
	{
		std::cout << av[i] << " ";
		if (i > 8)
		{
			std::cout << "[...]";
			break;
		}
	}
	std::cout << std::endl;
}

void	print_sorted(std::vector<int> vector_sorted) {
	int i = 0;
	std::cout << "After: ";
	for (std::vector<int>::const_iterator it = vector_sorted.begin(); it != vector_sorted.end(); ++it, i++)
	{
		std::cout << *it << ' ';
		if (i > 7)
		{
			std::cout << "[...]";
			break;
		}
	}
	std::cout << std::endl;
}

void	print_times(std::vector<int> vector_sorted, double vector_time, std::deque<int> deque_sorted, double deque_time){
	std::cout	<< "Time to process a range of " << vector_sorted.size()
		<< " elements with std::vector: " << vector_time << " us" << std::endl;

	std::cout	<< "Time to process a range of " << deque_sorted.size()
		<< " elements with std::deque: " << deque_time << " us" << std::endl;
}

bool	CheckAv(int ac, char **av){
	for (int i = 1; i < ac; i++){
		for ( int y = 0; av[i][y]; y++){
			if (!(av[i][y] >= '0' && av[i][y] <= '9')){
				std::cout << "Invalid input.: Invalid number" << std::endl;
				return false;
			}
		}
	}
	return unique_numbers(av);
}

bool	unique_numbers(char **av){
	std::set<int>	unique_numbers;

	for(int i = 1; av[i]; i++){
		int number = std::atoi(av[i]);
		std::pair<std::set<int>::iterator, bool> ret = unique_numbers.insert(number);
		if (ret.second == false){
			std::cout << "Invalid input.: Duplicate number" << std::endl;
			return false;
		}
	}
	return true;
}

template <typename Container>
void	av_convertion(int ac, char **av, Container &stack){
	for (int i = 1; i < ac; i++){
		int tmp = std::atoi(av[i]);
		stack.push_back(tmp);
	}
	return ;
}

std::vector<int>	vector_container(int ac, char **av){
	std::vector<int>	vector_stack;

	av_convertion(ac, av, vector_stack);
	sort(vector_stack, 0, vector_stack.size() - 1);
	return vector_stack;
}

std::deque<int>	deque_container(int ac, char **av){
	std::deque<int>	deque_stack;

	av_convertion(ac, av, deque_stack);
	sort(deque_stack, 0, deque_stack.size() - 1);
	return deque_stack;
}

//recursively divide in pairs and sort
template <typename Container>
void	sort(Container &stack, int start, int end){
	if (start < end){
		int	mid = (start + end) / 2;
		sort(stack, start, mid);
		sort(stack, mid + 1, end);
		merge(stack, start, mid, end);
	}
}

template <typename Container>
void	merge(Container &stack, int start, int mid, int end){
	Container	tmp;
	int i, j;
	i = start;
	j = mid + 1;

	while ( i <= mid && j <= end ){
		if (stack[i] < stack[j]){
			tmp.push_back(stack[i++]);
		} else {
			tmp.push_back(stack[j++]);
		}
	}
	while ( i <= mid ){
		tmp.push_back(stack[i++]);
	}
	while ( j <= end ){
		tmp.push_back(stack[j++]);
	}

	//override stack
	for ( int i = start; i <= end; ++i ){
		stack[i] = tmp[i - start];
	}
}
