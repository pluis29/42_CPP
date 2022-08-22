# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 13:55:12 by lpaulo-d          #+#    #+#              #
#    Updated: 2022/08/21 23:49:14 by lpaulo-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

F_FILE	=	main.cpp Contact.cpp PhoneBook.cpp
OBJ		=	$(F_FILE:.cpp=.o)

RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
CCP		=	g++
NAME	=	close_phone

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CCP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:	%.cpp
	$(CCP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
