/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:00:10 by plam              #+#    #+#             */
/*   Updated: 2021/10/21 15:23:29 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	rra(t_stk *a)
{
	if (a->size > 1)
		inv_rot_lst(&a->first, &a->last);
}

void	rrb(t_stk *b)
{
	if (b->size > 1)
		inv_rot_lst(&b->first, &b->last);
}

int	print_rra(t_stk *a)
{
	write(1, "ra\n", 3);
	rra(a);
}

int	print_rrb(t_stk *b)
{
	write(1, "rrb\n", 3);
	rrb(b);
}

void	rrr(t_stk *a, t_stk *b)
{
	write(1, "rrr\n", 4);
	rra(a);
	rrb(b);
}