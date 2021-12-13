/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_selec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:51:37 by plam              #+#    #+#             */
/*   Updated: 2021/12/13 14:27:47 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"
#include "push_swap.h"

void	push_smallest(t_stk *stk, int smlst)
{
	int		i;
	t_elm	*elm;

	i = 0;
	elm = stk->first_a;
	while (elm->target != smlst)
	{
		i++;
		elm = elm->next;
	}
	while (i <= stk->size_a / 2 && i > 0)
	{
		do_rotate(stk, MOVE_RA);
		i--;
	}
	while (i > stk->size_a / 2 && i < stk->size_a)
	{
		do_reverse_rotate(stk, MOVE_RRA);
		i++;
	}
	if (stk_sort(stk->first_a, 0) == KO)
		do_push(stk, MOVE_PB);
}

void	small_stk(t_stk *stk)
{
	if (stk->size_a == 3)
		stk_3_alg(stk);
	else if (stk->size_a == 4)
		stk_4_alg(stk);
	else
		stk_5_alg(stk);
}

int	solve(t_tab *tab, t_stk *stk, t_pos *pos, t_move *mov)
{
	if (init_stk(tab, stk) == ERR)
		return (ERR);
	if (longest_seq(&tab->seq, tab, tab->size) == ERR)
		return (ERR);
	if (stk->size_a >= 3 && stk->size_a <= 5)
		small_stk(stk);
	else
	{
		push_to_b(&tab->seq, tab, stk);
		push_to_a(stk, pos, mov);
	}
	return (OK);
}
