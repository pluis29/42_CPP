/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:51:30 by lpaulo-d          #+#    #+#             */
/*   Updated: 2022/08/22 23:05:24 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CONTACT_HPP
# define	CONTACT_HPP

# include <iostream>

class	Contact
{
	public:
		Contact( void );
		~Contact( void );

		int			index;

		void		set_firstName( void );
		void		set_lastName( void );
		void		set_nickname( void );
		void		set_phoneNumber( void );
		void		set_darkSecret( void );

		bool		isAlpha( std::string str );
		bool		isNumber( std::string str );

		void		print_Header( void );
		void		print_Contact( void );
		std::string	squeeze_toFit( std::string str );
		void		print_ContactID( void );

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkSecret;
};

#endif
