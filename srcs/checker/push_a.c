/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:28:19 by plam              #+#    #+#             */
/*   Updated: 2021/12/01 13:40:11 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	push_to_a(t_stk *stk, t_pos *pos, t_move *mov)
{
	t_elm	*stk_b;

	while (check_sort(stk->first_a, stk->size_b) == 0)
	{
		stk_b = stk->first_b;
		while (stk_b)
		{
			find_pos_a(stk_b->target, stk, pos);
			keep_best_pos(stk->size_a, stk->size_b, pos);
			stk_b = stk_b->next;
			pos->b++;
		}
		reset_moves(mov);
		if (stk->first_b == NULL)
			find_final_moves(stk->size_a, stk->size_b, pos, mov);
		else
			find_moves(stk->size_a, stk->size_b, pos, mov);
		exec_moves(stk, mov);
		reset_pos(pos);
	}
}
