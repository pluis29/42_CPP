/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:51:30 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/21 22:29:53 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CONTACT_HPP
# define	CONTACT_HPP

# include <iostream>

class	Contact
{
	public:
		Contact();
		~Contact();

		int			index;

		void		set_firstName();
		void		set_lastName();
		void		set_nickname();
		void		set_phoneNumber();
		void		set_darkSecret();

		bool		isAlpha(std::string str);
		bool		isNumber(std::string str);

		void		print_Header();
		void		print_Contact();
		std::string	squeeze_toFit(std::string str);
		void		print_ContactID();

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkSecret;
};

#endif
