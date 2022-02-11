# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:29:08 by plam              #+#    #+#              #
#    Updated: 2022/02/11 14:45:14 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		+=	gnl/get_next_line.c\
				gnl/get_next_line_utils.c

SRCS		+=	funcs/ft_atol.c\
				funcs/ft_ltoa.c\
				funcs/ft_memset.c\
				funcs/ft_memcpy.c\
				funcs/ft_putstr_fd.c\
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
				struct/first_sort.c\
				struct/free_struct.c\
				struct/tab_creation.c\
				struct/stk_creation.c\

SRCS		+=	checker/seq.c\
				checker/dist_a.c\
				checker/dist_b.c\
				checker/find_a.c\
				checker/push_a.c\
				checker/push_b.c\
				checker/shft_seq.c

SRCS		+=	algo/algo_selec.c\
				algo/low_num_alg.c\
				algo/insertion_sort.c
				
SRCS		+=	errors.c\
				push_swap.c\
				check_info.c

SRCS_BONUS	+=	$(SRCS)\
				bonus/inst_loop.c\
				bonus/check_loop.c


MAKE		=	/bin/make

PATH		=	srcs/

OBJS		= 	$(addprefix $(PATH), $(SRCS:.c=.o))

OBJS_BONUS	= 	$(addprefix $(PATH), $(SRCS_BONUS:.c=.o))

HEADERS		+=	headers/

NAME		=	push_swap

NAME_BONUS	=	checker

RM			=	/bin/rm -f

CC			=	/usr/bin/clang

CFLAGS		=	-g -Wall -Wextra -Werror -I $(HEADERS)

all:			$(NAME)

bonus:			$(NAME_BONUS)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME_BONUS):	$(OBJS_BONUS)
				$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)

$(LIBFT):
				$(MAKE) -sC libft
				$(MAKE) -sC libft bonus

%.o: %.c	
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
				$(RM) $(NAME) $(NAME_BONUS)

re:				fclean all

.PHONY:			all clean fclean re bonus