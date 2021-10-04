# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:29:08 by plam              #+#    #+#              #
#    Updated: 2021/10/04 14:47:35 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	checker.c		r.c\
				push_swap.c		s.c\
				free_stack.c	p.c\
				check_info.c	rr.c

INCLUDES	=	./includes/instructions.c
				./includes/stack.h

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