/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_num_alg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:25:32 by plam              #+#    #+#             */
/*   Updated: 2021/10/26 14:44:53 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"
#include "push_swap.h"

void	size_3_alg_part(t_stk *a)
{
	if (a->first->next->data > a->last->data)
	{
		if (a->first->data < a->last->data)
		{
			print_sa(a);
			print_ra(a);
		}
		else
			print_rra(a);
	}
}

int		size_3_alg(t_stk *a, t_stk *b)
{
	if (a->size != 3 || b->size != 3)
		error_push_swap();
	if (a->first->data > a->first->next->data)
	{
		if (a->first->next->data < a->last->data)
		{
			if (a->first->data < a->last->data)
				print_sa(a);
			else
				print_ra(a);
		}
		else
		{
			print_sa(a);
			print_rra(a);
		}
	}
	else
		size_3_alg_part(a);
	return (OK);
}