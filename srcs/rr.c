/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:00:10 by plam              #+#    #+#             */
/*   Updated: 2021/10/18 16:19:09 by plam             ###   ########.fr       */
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

void	rrr(t_stk *a, t_stk *b)
{
	rra(a);
	rrb(b);
	printf("%s\n", "rrr");
}