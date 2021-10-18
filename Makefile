# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:29:08 by plam              #+#    #+#              #
#    Updated: 2021/10/18 14:37:16 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		+=	gnl/get_next_line.c\
				gnl/get_next_line_utils.c

SRCS		+=	checker.c		r.c		errors.c\
				check_info.c	s.c		int_lst.c\
				push_swap.c		p.c		init_stk.c\
				lst_check.c		rr.c	stk_creation.c\
				lst_creation.c	instructions.c

LIBFT		=	libft/libft.a

PATH		=	srcs/

OBJS		= 	$(addprefix $(PATH), $(SRCS:.c=.o))

HEADERS		=	headers/.

NAME		=	push_swap

RM			=	/bin/rm -f

CC			=	clang

CFLAGS		=	-g -Wall -Wextra -Werror -I $(HEADERS)

all:			$(NAME)

$(NAME):		$(LIBFT) $(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(LIBFT):
				make -sC libft
				make -sC libft bonus

%.o: %.c	
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				make -sC libft clean
				$(RM) $(OBJS)

fclean:			clean
				make -sC libft fclean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus