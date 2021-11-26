/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:58:10 by plam              #+#    #+#             */
/*   Updated: 2021/11/26 15:24:41 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	ra(t_stk *stk)
{
	if (stk->size_a > 1)
		rot_lst(&stk->first_a, &stk->a->target);
}

void	rb(t_stk *stk)
{
	if (stk->size_b > 1)
		rot_lst(&stk->first_b, &stk->b->target);
}

void	print_ra(t_stk *stk)
{
	write(1, "ra\n", 3);
	ra(stk);
}

void	print_rb(t_stk *stk)
{
	write(1, "rb\n", 3);
	rb(stk);
}

void	rr(t_stk *stk)
{
	write(1, "rr\n", 3);
	ra(stk);
	rb(stk);
}
