/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:39:04 by plam              #+#    #+#             */
/*   Updated: 2021/10/18 14:57:39 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H

# define OK 1
# define ERR -1

# include "stack.h"

# include <unistd.h>
# include <stdio.h>

static void	rot_lst(t_lst **first, t_lst **last);
static void	inv_rot_lst(t_lst **first, t_lst **last);
void	swap_int(int *a, int *b);
static void	push_stk(t_stk *to_push, t_stk *stk);

void	pa(t_stk *a);
void	pb(t_stk *b);

void	sa(t_stk *a);
void	sb(t_stk *b);
void	ss(t_stk *a, t_stk *b);

void	ra(t_stk *a);
void	rb(t_stk *b);
void	rr(t_stk *a, t_stk *b);

void	rra(t_stk *a);
void	rrb(t_stk *b);
void	rrr(t_stk *a, t_stk *b);

#endif