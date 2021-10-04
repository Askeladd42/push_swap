# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:29:08 by plam              #+#    #+#              #
#    Updated: 2021/10/04 15:14:52 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	$(GNL)\
				checker.c		r.c\
				push_swap.c		s.c\
				free_stack.c	p.c\
				check_info.c	rr.c

LIBFT		=	srcs/libft/libft.a

GNL			=	gnl/get_next_line.c\
				gnl/get_next_line_utils.c

PATH		=	srcs/

OBJS		= 	$(addprefix $(PATH), $(SRCS))

HEADERS		=	headers/.

NAME		=	push_swap

RM			=	/bin/rm -f

CC			=	clang

CFLAGS		=	-Wall -Wextra -Werror -I $(HEADERS)

all:			$(NAME)

$(NAME):		$(OBJS)

%.o: %.c	
				$(CC) $(CFLAGS) -s $< -o $@

push_swap:		$(NAME)

checker:		$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus checker push_swap