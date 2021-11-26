/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:00:10 by plam              #+#    #+#             */
/*   Updated: 2021/11/26 15:28:07 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	rra(t_stk *stk)
{
	if (stk->size_a > 1)
		inv_rot_lst(&stk->first_a, &stk->a->target);
}

void	rrb(t_stk *stk)
{
	if (stk->size_b > 1)
		inv_rot_lst(&stk->first_b, &stk->b->target);
}

void	print_rra(t_stk *stk)
{
	write(1, "ra\n", 3);
	rra(stk);
}

void	print_rrb(t_stk *stk)
{
	write(1, "rrb\n", 3);
	rrb(stk);
}

void	rrr(t_stk *stk)
{
	write(1, "rrr\n", 4);
	rra(stk);
	rrb(stk);
}
