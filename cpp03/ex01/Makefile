# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cowen <cowen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/16 20:08:32 by cowen             #+#    #+#              #
#    Updated: 2022/02/03 18:09:22 by cowen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ScavTrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

HEADER = ClapTrap.hpp ScavTrap.hpp

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY	: 	all clean fclean re

all		:	$(NAME)

${NAME}	:	${OBJS} $(HEADER)
			$(CC) $(CPPFLAGS) ${OBJS} -o ${NAME}

%.o 	: 	%.c $(HEADER) 		
			$(CC) $(CFLAGS) -c $< -o $@
			
clean	: 		
			${RM} ${OBJS}

fclean	:		clean
			${RM} ${NAME}
	
re		:	fclean all
