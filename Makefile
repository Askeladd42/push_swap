# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:29:08 by plam              #+#    #+#              #
#    Updated: 2021/11/22 15:23:22 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		+=	gnl/get_next_line.c\
				gnl/get_next_line_utils.c

SRCS		+=	algo/low_num_algo.c\
				algo/algo_selec.c

SRCS		+=	instructions/r.c\
				instructions/s.c\
				instructions/p.c\
				instructions/rr.c

SRCS		+=	struct/init_stk.c\
				struct/init_tab.c\
				struct/tab_check.c\
				struct/tab_creation.c\
				struct/stk_creation.c

SRCS		+=	push_swap.c		errors.c\
				check_info.c	print_inst.c\
				instructions.c	print_inst2.c

MAKE		=	/bin/make

LIBFT		=	libft/libft.a

PATH		=	srcs/

OBJS		= 	$(addprefix $(PATH), $(SRCS:.c=.o))

HEADERS		=	headers/

NAME		=	push_swap

RM			=	/bin/rm -f

CC			=	/bin/clang

CFLAGS		=	-g -Wall -Wextra -Werror -I $(HEADERS)

all:			$(NAME)

$(NAME):		$(LIBFT) $(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(LIBFT):
				$(MAKE) -sC libft
				$(MAKE) -sC libft bonus

%.o: %.c	
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(MAKE) -sC libft clean
				$(RM) $(OBJS)

fclean:			clean
				$(MAKE) -sC libft fclean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus