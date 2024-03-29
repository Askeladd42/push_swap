/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_instr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:27:00 by plam              #+#    #+#             */
/*   Updated: 2021/11/29 14:29:49 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	find_simple_moves(int size_a, int size_b, t_pos *pos, t_move *move)
{
	if (pos->old_up_a == 1)
		move->ra = pos->old_a;
	else if (pos->old_up_a == 0)
		move->rra = size_a - pos->old_a;
	if (pos->old_up_b == 1)
		move->rb = pos->old_b;
	else if (pos->old_up_b == 0)
		move->rrb = size_b - pos->old_b;
}

void	find_double_moves(t_move *move)
{
	if (move->ra > 0 && move->rb > 0)
	{
		if (move->ra < move->rb)
			move->rr = move->ra;
		else
			move->rr = move->rb;
		move->ra -= move->rr;
		move->rb -= move->rr;
	}
	else if (move->rra > 0 && move->rrb > 0)
	{
		if (move->rra < move->rrb)
			move->rrr = move->rra;
		else
			move->rrr = move->rrb;
		move->rra -= move->rrr;
		move->rrb -= move->rrr;
	}
}

void	find_moves(int size_a, int size_b, t_pos *pos, t_move *move)
{
	find_simple_moves(size_a, size_b, pos, move);
	find_double_moves(move);
	if (size_b > 0)
		move->pa = 1;
}

void	find_final_moves(int size_a, t_elm *first_a, t_move *move)
{
	int		i;
	t_elm	*elm;

	i = 0;
	elm = first_a;
	while (elm->target != 0)
	{
		i++;
		elm = elm->next;
	}
	if (i == 0)
		return ;
	if (i < size_a / 2)
		move->ra = i;
	else
		move->rra = size_a - i;
}
