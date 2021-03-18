# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:29:08 by plam              #+#    #+#              #
#    Updated: 2021/03/18 17:14:48 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	checker.c\
				push_swap.c

NAME		=	push_swap

OBJS		=	${SRC:.c=.o}

RM			=	/bin/rm -f

CC			=	clang

CFLAGS		=	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)

%.o: %.c
			$(CC) $(CFLAGS) -s $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus