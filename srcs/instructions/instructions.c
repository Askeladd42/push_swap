/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:11:03 by plam              #+#    #+#             */
/*   Updated: 2021/11/29 14:25:58 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	exec_moves_rotate(t_stk *stk, t_move *move)
{
	while (move->rr > 0)
	{
		do_rotate(stk, MOVE_RR);
		move->rr--;
	}
	while (move->ra > 0)
	{
		do_rotate(stk, MOVE_RA);
		move->ra--;
	}
	while (move->rb > 0)
	{
		do_rotate(stk, MOVE_RB);
		move->rb--;
	}
}

void	exec_moves_reverse(t_stk *stk, t_move *move)
{
	while (move->rrr > 0)
	{
		do_reverse_rotate(stk, MOVE_RRR);
		move->rrr--;
	}
	while (move->rra > 0)
	{
		do_reverse_rotate(stk, MOVE_RRA);
		move->rra--;
	}
	while (move->rrb > 0)
	{
		do_reverse_rotate(stk, MOVE_RRB);
		move->rrb--;
	}
}

void	exec_moves(t_stk *stk, t_move *move)
{
	exec_moves_rotate(stk, move);
	exec_moves_reverse(stk, move);
	if (move->pa == 1)
	{
		do_push(stk, MOVE_PA);
		move->pa = 0;
	}
}
