/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:05:23 by plam              #+#    #+#             */
/*   Updated: 2022/01/05 13:39:52 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"
#include "push_swap.h"

void	reset_pos(t_pos *pos)
{
	pos->a = 0;
	pos->b = 0;
	pos->old_a = -1;
	pos->old_b = -1;
	pos->dist_a = 0;
	pos->dist_b = 0;
	pos->old_dist_a = 0;
	pos->old_dist_b = 0;
	pos->up_a = 0;
	pos->up_b = 0;
	pos->old_up_a = 0;
	pos->old_up_a = 0;
}

int	target_pos(t_tab *tab, int pos)
{
	int	i;

	i = 0;
	while (i < tab->size)
	{
		if (tab->unsort[pos] == tab->sort[i])
			return (i);
		i++;
	}
	return (0);
}

/*
** record integer values
*/

void	target_stk(t_tab *tab, t_elm *elm)
{
	int	i;

	i = 0;
	while (elm)
	{
		elm->target = target_pos(tab, i);
		elm = elm->next;
		i++;
	}
}

/*
** record all values into the tab
*/

int	stk_sort(t_elm *first, int size)
{
	int		old_target;
	t_elm	*elm;

	if (first == NULL || size != 0)
		return (KO);
	elm = first;
	old_target = elm->target;
	while (elm)
	{
		if (elm->target < old_target)
			return (KO);
		old_target = elm->target;
		elm = elm->next;
	}
	return (OK);
}
