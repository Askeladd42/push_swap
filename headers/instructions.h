/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:39:04 by plam              #+#    #+#             */
/*   Updated: 2021/11/24 11:41:40 by plam             ###   ########.fr       */
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

/*static void	rot_lst(t_lst **first, t_lst **last);
static void	inv_rot_lst(t_lst **first, t_lst **last);
void		swap_int(int *a, int *b);
static void	push_stk(t_stk *to_push, t_stk *stk);
*/


void		sa(t_stk *stk);
void		sb(t_stk *stk);
void		ss(t_stk *stk);

void		ra(t_stk *stk);
void		rb(t_stk *stk);
void		rr(t_stk *stk);

void		rra(t_stk *stk);
void		rrb(t_stk *stk);
void		rrr(t_stk *stk);

void		pa(t_stk *stk);
void		pb(t_stk *stk);

int			print_cond(,t_tab *tab, t_stk *stk);
void		print_ra(t_stk *stk);
void		print_rb(t_stk *stk);
void		print_rra(t_stk *stk);
void		print_rrb(t_stk *stk);
void		print_sa(t_stk *stk);
void		print_sb(t_stk *stk);

#endif