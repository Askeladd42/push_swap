# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:29:08 by plam              #+#    #+#              #
#    Updated: 2021/10/04 15:58:30 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		+=	gnl/get_next_line.c\
				gnl/get_next_line_utils.c

SRCS		+=	checker.c		r.c\
				push_swap.c		s.c\
				free_stack.c	p.c\
				check_info.c	rr.c

LIBFT		=	srcs/libft

PATH		=	srcs/

OBJS		= 	$(addprefix $(PATH), $(SRCS))

HEADERS		=	headers/.

NAME		=	push_swap

RM			=	/bin/rm -f

CC			=	clang

CFLAGS		=	-g -Wall -Wextra -Werror -I $(HEADERS)

all:			$(LIBFT) $(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(LIBFT):
				@cd $(LIBFT) && $(MAKE) && $(MAKE) bonus && $(MAKE) clean

%.o: %.c	
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS:.o)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus checker push_swap