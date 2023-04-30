# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/18 13:08:02 by lpaulo-d          #+#    #+#              #
#    Updated: 2023/04/23 13:36:51 by lpaulo-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJDIR	=	obj/

INC		=	PmergeMe.hpp
F_FILE	=	main.cpp PmergeMe.cpp
OBJ		=	$(F_FILE:%.cpp=$(OBJDIR)%.o)

CCP		=	c++
RM		=	rm -rf
P_GUARD	=	mkdir -p $(@D)
CFLAGS	=	-Wall -Wextra -Werror -I -std=c++98
NAME	=	PmergeMe

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CCP) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o:	%.cpp $(INC)
	$(P_GUARD)
	$(CCP) $(CFLAGS) -c $< -o $@

run: all
	./$(NAME)

clean:
	$(RM) $(OBJDIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re run val
