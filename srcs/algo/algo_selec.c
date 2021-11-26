/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_selec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:51:37 by plam              #+#    #+#             */
/*   Updated: 2021/11/26 13:17:47 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"
#include "push_swap.h"

int	solve(t_tab *tab, t_stk *stk, t_pos *pos, t_move *move)
{
	if (init_stk(tab, stk) == ERR)
		return (ERR);
	if (longest_sequence(&tab->seq, tab, tab->size) == ERR)
		return (ERR);
	if (stk->size_a >= 3 && stk->size_a <= 5)
		small_stk(stk);
	else
	{
		push_to_b(&tab->seq, tab, stk);
		push_to_a(stk, pos, move);
	}
	return (OK);
}