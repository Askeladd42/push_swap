# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:29:08 by plam              #+#    #+#              #
#    Updated: 2021/12/03 13:05:13 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		+=	gnl/get_next_line.c\
				gnl/get_next_line_utils.c

SRCS		+=	funcs/ft_atol.c\
				funcs/ft_memset.c\
				funcs/ft_memcpy.c\
				funcs/ft_lstnew.c\
				funcs/ft_lstlast.c\
				funcs/ft_lstclear.c\
				funcs/ft_lstdelone.c\
				funcs/ft_lstadd_front.c\
				funcs/ft_lstadd_back.c

SRCS		+=	instructions/r.c\
				instructions/s.c\
				instructions/p.c\
				instructions/rr.c\
				instructions/find_instr.c\
				instructions/instructions.c

SRCS		+=	struct/init_stk.c\
				struct/init_tab.c\
				struct/tab_check.c\
				struct/tab_creation.c\
				struct/stk_creation.c

SRCS		+=	checker/seq.c\
				checker/dist_a.c\
				checker/dist_b.c\
				checker/find_a.c\
				checker/push_a.c\
				checker/push_b.c\
				checker/shft_seq.c

SRCS		+=	algo/algo_selec.c\
				algo/algo_selec.c\
				algo/low_num_algo.c
				
SRCS		+=	errors.c\
				push_swap.c		print_inst.c\
				check_info.c	print_inst2.c

BONUS		+=	

MAKE		=	/bin/make

PATH		=	srcs/

OBJS		= 	$(addprefix $(PATH), $(SRCS:.c=.o))

HEADERS		=	headers/

NAME		=	push_swap

RM			=	/bin/rm -f

CC			=	/bin/clang

CFLAGS		=	-g -Wall -Wextra -Werror -I $(HEADERS)

all:			$(NAME)

$(NAME):
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