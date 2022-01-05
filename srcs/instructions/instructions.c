/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:11:03 by plam              #+#    #+#             */
/*   Updated: 2022/01/05 15:23:27 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	reset_moves(t_move *move)
{
	move->sa = 0;
	move->sb = 0;
	move->ss = 0;
	move->pa = 0;
	move->pb = 0;
	move->ra = 0;
	move->rb = 0;
	move->rr = 0;
	move->rra = 0;
	move->rrb = 0;
	move->rrr = 0;
}

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
	t_elm *stk_a = stk->first_a;
		while (stk_a)
		{
			printf("stk_a = %d\n", stk_a->target);
			stk_a = stk_a->next;
		}
		printf("size a = %d\n\n", stk->size_a);
		t_elm *stk_b = stk->first_b;
		while (stk_b)
		{
			printf("stk_b = %d\n", stk_b->target);
			stk_b = stk_b->next;
		}
		printf("size b = %d\n\n", stk->size_b);
	exec_moves_reverse(stk, move);
	t_elm *stk_af = stk->first_a;
		while (stk_af)
		{
			printf("stk_a = %d\n", stk_af->target);
			stk_af = stk_af->next;
		}
		printf("size a = %d\n\n", stk->size_a);
		t_elm *stk_bf = stk->first_b;
		while (stk_bf)
		{
			printf("stk_b = %d\n", stk_bf->target);
			stk_bf = stk_bf->next;
		}
		printf("size b = %d\n\n", stk->size_b);
	if (move->pa == 1)
	{
		do_push(stk, MOVE_PA);
		move->pa = 0;
	}
}
