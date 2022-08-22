/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:58:05 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/21 23:42:35 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONE_BOOK_HPP
# define	PHONE_BOOK_HPP

#include "Contact.hpp"
#include <string>

class	PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		void	Add_New_Contact();
		void	print_AllContacts();
		void	search_Contact();
		int		check_index(std::string user_input);

	private:
		int		_id;
		int		_size;
		Contact	_contact[9];
};

#endif
