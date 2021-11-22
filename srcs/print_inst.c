/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_inst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:44:06 by plam              #+#    #+#             */
/*   Updated: 2021/11/22 15:40:01 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

/*

Make the different print for each instructions or a general function ?
Maybe looking at a list ?
print first, then execute the commands

*/

int	print_cond(t_stk *a, t_stk *b)
{
	if (a == NULL && b == NULL)
		return (ERR);
	else // covering the whole list data in the correct order
	{
		printf("a :\n");
		while (a->first->next)
			printf("%d\n", a->first->data);
		printf("\nb :\n");
		while (b->first->next)
			printf("%d\n", b->first->data);
		return (OK);
	}
}

/*
temporary printing functions for instructions
*/

void	print_ra(t_stk *a)
{
	ra(a);
	printf("ra\n");
}

void	print_rb(t_stk *b)
{
	rb(b);
	printf("rb\n");
}

void	print_rra(t_stk *a)
{
	rra(a);
	printf("rra\n");
}
