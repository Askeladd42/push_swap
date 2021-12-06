/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:39:04 by plam              #+#    #+#             */
/*   Updated: 2021/12/06 14:05:33 by plam             ###   ########.fr       */
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
# include <stdlib.h>
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

long	ft_atol(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
t_elm	*ft_lstnew(void);
t_elm	*ft_lstlast(t_elm *lst);
void	ft_lstdelone(t_elm *lst);
void	ft_lstclear(t_elm **lst);
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

int	dist_simple_rot(int size_a, int size_b, int fst, t_pos *pos);
int	dist_double_rot(int fst, t_pos *pos);
int	dist_double_rev(int size_a, int size_b, int fst, t_pos *pos);
void	dist_to_a(int size_a, int size_b, t_pos *pos);

int	biggest_target(t_elm *elm, int size);
void	find_pos_a(int target, t_stk *stk, t_pos *pos);
void	keep_best_pos(int size_a, int size_b, t_pos *pos);

void	set_push_elm(int size, int lis_size, int *lis, t_elm *elm);
int		next_elm_to_push(t_elm *elm);
void	push_to_b(t_seq *seq, t_tab *tab, t_stk *stk);

void	push_smallest(t_stk *stk, int smlst);
void	small_stk(t_stk *stk);
void	stk_3_alg(t_stk *stk);
void	stk_4_alg(t_stk *stk);
void	stk_5_alg(t_stk *stk);

#endif