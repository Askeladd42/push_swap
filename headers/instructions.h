/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:39:04 by plam              #+#    #+#             */
/*   Updated: 2021/11/29 16:21:49 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H

# define OK 1
# define KO 0
# define ERR -1
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define ERROR "Error\n"

# include "struct.h"

# include <unistd.h>
# include <stdio.h>

enum e_move {
	MOVE_SA,
	MOVE_SB,
	MOVE_SS,
	MOVE_PA,
	MOVE_PB,
	MOVE_RA,
	MOVE_RB,
	MOVE_RR,
	MOVE_RRA,
	MOVE_RRB,
	MOVE_RRR
};

typedef struct s_move
{
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
}				t_move;

int	ft_atol(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
t_elm	*ft_lstnew(void *content);
t_elm	*ft_lstlast(t_elm *lst);
void	ft_lstclear(t_elm **elm, void (*del)(void *));
void	ft_lstdelone(t_elm *elm, void (*del)(void *));
void	ft_lstadd_front(t_elm **alst, t_elm *new);
void	ft_lstadd_back(t_elm **alst, t_elm *new);

void	swap(t_elm **first, int size);
void	double_swap(t_stk *stk);
void	do_swap(t_stk *stk, int move);

void	rotate(t_elm **first, int size);
void	double_rotate(t_stk *stk);
void	do_rotate(t_stk *stk, int move);

void	reverse_rotate(t_elm **first, int size);
void	double_reverse_rotate(t_stk *stk);
void	do_reverse_rotate(t_stk *stk, int move);

void	push(t_elm **to, t_elm **from);
void	do_push(t_stk *stk, int move);

#endif