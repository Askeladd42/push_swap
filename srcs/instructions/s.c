/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:01:35 by plam              #+#    #+#             */
/*   Updated: 2021/12/13 16:01:34 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	swap(t_elm **first, int size)
{
	t_elm	*elm_tmp;
	int		target_tmp;

	if (*first == NULL || size < 2)
		return ;
	elm_tmp = *first;
	target_tmp = elm_tmp->next->target;
	elm_tmp->next->target = elm_tmp->target;
	elm_tmp->target = target_tmp;
}

void	double_swap(t_stk *stk)
{
	swap(&stk->first_a, stk->size_a);
	swap(&stk->first_b, stk->size_b);
}

void	do_swap(t_stk *stk, int move)
{
	if (move == MOVE_SA)
	{
		swap(&stk->first_a, stk->size_a);
		write(1, "sa\n", 3);
	}
	else if (move == MOVE_SB)
	{
		swap(&stk->first_b, stk->size_b);
		write(1, "sb\n", 3);
	}
	else if (move == MOVE_SS)
	{
		double_swap(stk);
		write(1, "ss\n", 3);
	}
}
