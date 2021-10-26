/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_num_alg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:25:32 by plam              #+#    #+#             */
/*   Updated: 2021/10/26 15:33:14 by plam             ###   ########.fr       */
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

int		size_3_alg(t_stk *a)
{
	if (a->size != 3)
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

int		size_4_alg(t_stk *a, t_stk *b)
{
	if (a->size != 4)
		error_push_swap();
	pb(a, b);
	size_3_alg(a);
	pa(a, b);
	if (a->first->data > a->last->data)
		print_ra(a);
	if (a->first->data < a->first->next->data)
		print_sa(a);
	pa(a, b);
	if (a->first->data > a->last->data)
		print_ra(a);
	if (a->first->data < a->first->next->data)
		print_sa(a);
}

void	size_5_alg_part(t_stk *a, t_stk *b)
{
	if (b->first->data > b->last->data)
		print_rb(b);
	pa(a, b);
	/*
		checking if the reintroduced number is in the good place :
		- if yes : push b again
		- if no : sort a again in the good order
	*/
	size_4_alg(a, b);
	pa(a, b);
	/*
		checking again if the reintroduced number is in the good place :
		- if yes : done !
		- if no : sort a again in the good order
	*/
}

int		size_5_alg(t_stk *a, t_stk *b)
{
	if (a->size != 5)
		error_push_swap();
	pb(a, b);
	pb(a, b);
	size_3_alg(a);
	size_5_alg_part(a, b);
	return (OK);
}