/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:41:49 by plam              #+#    #+#             */
/*   Updated: 2021/12/01 13:45:52 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	push_to_b(t_seq *seq, t_tab *tab, t_stk *stk)
{
	int	i;
	int	rotate;

	i = 0;
	set_push_elem(tab->size, seq->size, seq->lis, stk->first_a);
	while (i < tab->size - seq->size)
	{
		rotate = next_elem_to_push(stk->first_a);
		while (rotate > 0)
		{
			do_rotate(stk, MOVE_RA);
			rotate--;
		}
		do_push(stk, MOVE_PB);
		i++;
	}
}