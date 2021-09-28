# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:29:08 by plam              #+#    #+#              #
#    Updated: 2021/09/28 14:50:03 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	checker.c\
				push_swap.c\
				free_stack.c\
				check_info.c

NAME		=	push_swap

OBJS		=	${SRC:.c=.o}

RM			=	/bin/rm -f

CC			=	clang

CFLAGS		=	-Wall -Wextra -Werror

LIBFT		=	srcs/libft.a

GNL			=	srcs/get_next_line.c

all:		$(NAME)

$(NAME):	$(OBJS)

%.o: %.c
			$(CC) $(CFLAGS) -s $< -o $@

push_swap:	$(NAME)

checker:	$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus checker push_swap