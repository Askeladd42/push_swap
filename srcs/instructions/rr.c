/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:00:10 by plam              #+#    #+#             */
/*   Updated: 2021/11/29 15:24:36 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	reverse_rotate(t_elm **first, int size)
{
	t_elm	*tmp;

	if (*first == NULL || size < 2)
		return ;
	if (size == 2)
	{
		swap(first, size);
		return ;
	}
	tmp = *first;
	while (tmp->next->next)
		tmp = tmp->next;
	ft_lstadd_front(first, tmp->next);
	tmp->next = NULL;
}

void	double_reverse_rotate(t_stk *stk)
{
	reverse_rotate(&stk->first_a, stk->size_a);
	reverse_rotate(&stk->first_b, &stk->size_b);
}

void	do_reverse_rotate(t_stk *stk, int move)
{
	if (move == MOVE_RRA)
	{
		reverse_rotate(&stk->first_a, stk->size_a);
		write(1, "rra\n", 4);
	}
	else if (move == MOVE_RRB)
	{
		reverse_rotate(&stk->first_b, stk->size_b);
		write(1, "rrb\n", 4);
	}
	else if (move == MOVE_RRR)
	{
		double_reverse_rotate(stk);
		write(1, "rrr\n", 4);
	}
}
