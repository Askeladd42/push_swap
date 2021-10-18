/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:58:10 by plam              #+#    #+#             */
/*   Updated: 2021/10/18 15:14:00 by plam             ###   ########.fr       */
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

void	rr(t_stk *a, t_stk *b)
{
	ra(a);
	rb(b);
	printf("%s\n", "rr");
}