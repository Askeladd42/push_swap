/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:58:10 by plam              #+#    #+#             */
/*   Updated: 2022/01/05 15:04:02 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	rotate(t_elm **first, int size)
{
	t_elm	*elem_rotate;
	t_elm	*new_first;
	t_elm	*tmp;

	if (*first == NULL || size < 2)
		return ;
	if (size == 2)
	{
		swap(first, size);
		return ;
	}
	elem_rotate = *first;
	new_first = elem_rotate->next;
	tmp = elem_rotate->next->next;
	elem_rotate->next = NULL;
	ft_lstadd_front(first, new_first);
	new_first->next = tmp;
	ft_lstadd_back(first, elem_rotate);
}

void	double_rotate(t_stk *stk)
{
	rotate(&stk->first_a, stk->size_a);
	rotate(&stk->first_b, stk->size_b);
}

void	do_rotate(t_stk *stk, int move)
{
	if (move == MOVE_RA)
	{
		rotate(&stk->first_a, stk->size_a);
		write(1, "ra\n", 3);
	}
	else if (move == MOVE_RB)
	{
		rotate(&stk->first_b, stk->size_b);
		write(1, "rb\n", 3);
	}
	else if (move == MOVE_RR)
	{
		double_rotate(stk);
		write(1, "rr\n", 3);
	}
}
