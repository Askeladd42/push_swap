/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:02:25 by plam              #+#    #+#             */
/*   Updated: 2021/10/18 16:20:09 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	pa(t_stk *a, t_stk *b)
{
	if (b->size > 0)
	{
		push(b, a);
		a->size += 1;
		b->size -= 1;
		if (b->size == 0)
			b->last = NULL;
		if (a->size == 1)
			a->last = a->first;
		printf("%s\n", "pa");
	}
}

void	pb(t_stk *a, t_stk *b)
{
	if (a->size > 0)
	{
		push(a, b);
		a->size -= 1;
		b->size += 1;
		if (a->size == 0)
			a->last = NULL;
		if (b->size == 1)
			b->last = b->first;
		printf("%s\n", "pb");
	}
}
