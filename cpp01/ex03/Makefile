# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cowen <cowen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/16 20:08:32 by cowen             #+#    #+#              #
#    Updated: 2022/01/25 20:58:27 by cowen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fight

SRCS = 	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

HEADER = HumanA.hpp HumanB.hpp

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
