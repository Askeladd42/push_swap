/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:01:35 by plam              #+#    #+#             */
/*   Updated: 2021/10/21 15:23:46 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"

void	sa(t_stk *a)
{
	if (a-> size > 1)
		swap_int(&a->first->data, &a->first->next->data);
}

void	sb(t_stk *b)
{
	if (b-> size > 1)
		swap_int(&b->first->data, &b->first->next->data);
}

int	print_sa(t_stk *a)
{
	write("sa\n", 3);
	sa(a);
}

int	print_sb(t_stk *a)
{
	write("sb\n", 3);
	sb(b);
}

void	ss(t_stk *a, t_stk *b)
{
	printf("%s\n", "ss");
	sa(a);
	sb(b);
}