/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:01:35 by plam              #+#    #+#             */
/*   Updated: 2021/11/26 15:32:38 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	sa(t_stk *stk)
{
	if (stk->size_a > 1)
		swap_int(&stk->first_a, &stk->first_a->next);
}

void	sb(t_stk *stk)
{
	if (stk->size_b > 1)
		swap_int(&stk->first_b, &stk->first_b->next);
}

void	print_sa(t_stk *stk)
{
	write(1, "sa\n", 3);
	sa(stk);
}

void	print_sb(t_stk *stk)
{
	write(1, "sb\n", 3);
	sb(stk);
}

void	ss(t_stk *stk)
{
	write(1, "ss\n", 3);
	sa(stk);
	sb(stk);
}
