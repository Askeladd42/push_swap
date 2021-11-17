# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:29:08 by plam              #+#    #+#              #
#    Updated: 2021/11/17 13:35:30 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		+=	gnl/get_next_line.c\
				gnl/get_next_line_utils.c

SRCS		+=	low_num_algo.c\
				algo_selec.c

SRCS		+=	push_swap.c		r.c				errors.c\
				check_info.c	s.c				int_lst.c\
				lst_check.c		p.c				init_stk.c\
				instructions.c	print_inst.c	print_inst2.c\
				lst_creation.c	rr.c			stk_creation.c

LIBFT		=	libft/libft.a

PATH		=	srcs/

OBJS		= 	$(addprefix $(PATH), $(SRCS:.c=.o))

HEADERS		=	headers/

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