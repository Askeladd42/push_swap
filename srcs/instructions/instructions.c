/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:11:03 by plam              #+#    #+#             */
/*   Updated: 2021/11/22 15:36:40 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

static void	rot_lst(t_lst **first, t_lst **last)
{
	(*first)->prev = *last;
	*first = (*first)->next;
	(*last)->next = (*first)->prev;
	*last = (*last)->next;
	(*first)->prev = NULL;
	(*last)->next = NULL;
}

static void	inv_rot_lst(t_lst **first, t_lst **last)
{
	(*last)->next = *first;
	*last = (*last)->prev;
	(*first)->prev = (*last)->next;
	*first = (*first)->prev;
	(*first)->prev = NULL;
	(*last)->next = NULL;
}

void	swap_int(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static void	push_stk(t_stk *to_push, t_stk *stk)
{
	t_stk	*tmp;

	tmp = to_push->first;
	to_push->first = to_push->first->next;
	if (to_push->first)
		to_push->first->prev = NULL;
	tmp->next = stk->first;
	if (stk->first)
		stk->first->prev = tmp;
	stk->first = tmp;
}
