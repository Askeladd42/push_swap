/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:01:35 by plam              #+#    #+#             */
/*   Updated: 2021/10/18 14:43:14 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"

void	sa(t_stk *a)
{
	if (a-> size > 1)
	{
		swap_int(&a->first, &a->last);
		printf("%s\n", "sa");
	}
}

void	sb(t_stk *b)
{
	if (b-> size > 1)
	{
		swap_int(&b->first, &b->last);
		printf("%s\n", "sb");
	}
}

void	ss(t_stk *a, t_stk *b)
{
	sa(a);
	sb(b);
	printf("%s\n", "ss");
}