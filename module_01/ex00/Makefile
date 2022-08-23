# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 13:55:12 by lpaulo-d          #+#    #+#              #
#    Updated: 2022/08/22 22:11:23 by lpaulo-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJDIR	=	obj/

F_FILE	=	main.cpp Zombie.cpp newZombie.cpp randomChamp.cpp
OBJ		=	$(F_FILE:%.cpp=$(OBJDIR)%.o)

CCP		=	g++
RM		=	rm -rf
P_GUARD	=	mkdir -p $(@D)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
NAME	=	bornToBeZombie

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CCP) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o:	%.cpp
	$(P_GUARD)
	$(CCP) $(CFLAGS) -c $< -o $@

run:
	./$(NAME)

val:
	valgrind --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./$(NAME)

clean:
	$(RM) $(OBJDIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re run val
