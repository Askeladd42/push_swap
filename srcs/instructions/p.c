/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:02:25 by plam              #+#    #+#             */
/*   Updated: 2021/11/26 15:31:19 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	pa(t_stk *stk)
{
	if (stk->size_b > 0)
	{
		push(b, a);
		stk->size_a += 1;
		stk->size_b -= 1;
		if (stk->size_b == 0)
			b->last = NULL;
		if (stk->size_a == 1)
			a->last = a->first;
		printf("%s\n", "pa");
	}
}

void	pb(t_stk *stk)
{
	if (stk->size_a > 0)
	{
		push(a, b);
		stk->size_a -= 1;
		stk->size_b += 1;
		if (stk->size_a == 0)
			a->last = NULL;
		if (stk->size_b == 1)
			b->last = b->first;
		printf("%s\n", "pb");
	}
}
