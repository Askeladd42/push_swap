/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:05:23 by plam              #+#    #+#             */
/*   Updated: 2021/11/26 14:55:02 by plam             ###   ########.fr       */
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
** record all values into the tab *
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

/*
**	record integers from each string && store them in lst in stk a
**
** 		char *(srcs) : all character strings are already split
**					and must be convert into int
**		check if there are duplicate values
**		return : generate stk a
*/

t_stk	*generate_stack_a_content(char **srcs, int size)
{
	t_stk		*stk;
	t_tab		*t;

	t = get_all_values_to_tab(srcs, size);
	if (!t)
		return (NULL);
	if (is_duplicate_data(t) == TRUE)
	{
		error_push_swap();
		return (NULL);
	}
	stk = malloc_stk(t, get_last_tab(t), size - 1);
	if (!stk)
	{
		free_push_swap(&t, &stk);
		return (NULL);
	}
	return (stk);
}
