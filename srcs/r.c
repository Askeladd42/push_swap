/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:58:10 by plam              #+#    #+#             */
/*   Updated: 2021/10/21 15:23:19 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"

void	ra(t_stk *a)
{
	if (a->size > 1)
		rot_lst(&a->first, &a->last);
}

void	rb(t_stk *b)
{
	if (b->size > 1)
		rot_lst(&b->first, &b->last);
}

int	print_ra(t_stk *a)
{
	write("ra\n", 3);
	ra(a);
}

int	print_rb(t_stk *a)
{
	write("rb\n", 3);
	rb(b);
}

void	rr(t_stk *a, t_stk *b)
{
	printf("%s\n", "rr");
	ra(a);
	rb(b);
}