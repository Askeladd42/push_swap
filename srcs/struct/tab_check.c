/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:05:23 by plam              #+#    #+#             */
/*   Updated: 2021/11/26 12:42:50 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

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
** record integer values with atoi
** if correct integer(atoi i return true or false) -> return malloc(lst)
*/

static t_lst	*atoi_to_lst(char *src, t_lst *last)
{
	int		data;

	if (!str_is_digits(src) || ft_atoi_i(src, &data) == FALSE)
	{
		error_push_swap();
		return (NULL);
	}
	return (add_last_lst(data, last));
}

/*
** record all values into lst *
*/

static t_lst	*get_all_values_to_lst(char **src, int size)
{
	int		i;
	t_lst	*l;
	t_lst	*first;

	i = 1;
	first = atoi_to_lst(src[i], NULL);
	if (first == NULL)
		return (NULL);
	l = first;
	while (++i < size)
	{
		l->next = atoi_to_lst(src[i], l);
		if (l->next == NULL)
		{
			free_all_lst(first);
			return (NULL);
		}
		l = l->next;
	}
	return (first);
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
	t_stk		*a;
	t_lst		*l;

	l = get_all_values_to_lst(srcs, size);
	if (!l)
		return (NULL);
	if (is_duplicate_data(l) == TRUE)
	{
		free_all_lst(l);
		error_push_swap();
		return (NULL);
	}
	a = malloc_stack(l, get_last_lst(l), size - 1);
	if (!a)
	{
		free_all_lst(l);
		return (NULL);
	}
	return (a);
}
