/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_num_alg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:25:32 by plam              #+#    #+#             */
/*   Updated: 2021/12/03 14:34:41 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"
#include "push_swap.h"

void	stk_3_alg_part(t_stk *stk)
{
	t_elm	*elm;

	elm = stk->first_a;
	if (elm->target < elm->next->next->target)
	{
		do_swap(stk, MOVE_SA);
		do_rotate(stk, MOVE_RA);
	}
	else
		do_reverse_rotate(stk, MOVE_RRA);
}

void	stk_3_alg(t_stk *stk)
{
	t_elm	*elm;

	elm = stk->first_a;
	if (elm->target > elm->next->target)
	{
		if (elm->next->target < elm->next->next->target)
		{
			if (elm->target < elm->next->next->target)
				do_swap(stk, MOVE_SA);
			else
				do_rotate(stk, MOVE_RA);
		}
		else
		{
			do_swap(stk, MOVE_SA);
			do_reverse_rotate(stk, MOVE_RRA);
		}
	}
	else
		stk_3_alg_part(stk);
}

void	stk_4_alg(t_stk *stk)
{
	push_smallest(stk, 0);
	if (stk_sort(stk, 0) == 0)
		stk_3_alg(stk);
	do_push(stk, MOVE_PA);
}

void	stk_5_alg(t_stk *stk)
{
	push_smallest(stk, 0);
	if (stk_sort(stk->first_a, 0) == KO)
		push_smallest(stk, 1);
	if (stk_sort(stk->first_a, 0) == KO)
		stk_3_alg(stk);
	do_push(stk, MOVE_PA);
	if (stk_sort(stk->first_a, stk->size_b) == KO)
		do_push(stk, MOVE_PA);
}
