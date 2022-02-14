/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:01:07 by plam              #+#    #+#             */
/*   Updated: 2022/02/14 16:26:59 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

int	biggest_target(t_elm *elm, int size)
{
	int	i;
	int	b_t;
	int	b_i;

	i = 0;
	b_t = -1;
	while (elm)
	{
		if (elm->target > b_t)
		{
			b_t = elm->target;
			b_i = i;
		}
		i++;
		elm = elm->next;
	}
	if (b_i == size - 1)
		return (0);
	return (b_i + 1);
}

void	find_pos_a(int target, t_stk *stk, t_pos *pos)
{
	int		i;
	int		near;
	t_elm	*stk_a;

	i = 0;
	near = -1;
	pos->a = 0;
	stk_a = stk->first_a;
	while (stk_a)
	{
		if ((near == -1 || stk_a->target - target < near)
			&& stk_a->target - target > 0)
		{
			near = stk_a->target - target;
			pos->a = i;
		}
		i++;
		stk_a = stk_a->next;
	}
	if (near == -1)
		pos->a = biggest_target(stk->first_a, stk->size_a);
}

void	keep_best_pos(int size_a, int size_b, t_pos *pos)
{
	int	nb_mv;
	int	old_nb_mv;

	dist_to_a(size_a, size_b, pos);
	nb_mv = pos->dist_a + pos->dist_b;
	old_nb_mv = pos->old_dist_a + pos->old_dist_b;
	if (pos->old_a == -1 || nb_mv < old_nb_mv)
	{
		pos->old_a = pos->a;
		pos->old_b = pos->b;
		pos->old_dist_a = pos->dist_a;
		pos->old_dist_b = pos->old_dist_b;
		pos->old_up_a = pos->up_a;
		pos->old_up_b = pos->old_up_b;
	}
}
