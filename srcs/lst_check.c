/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:05:23 by plam              #+#    #+#             */
/*   Updated: 2021/10/11 10:04:09 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"

static int	is_duplicate_data(t_lst *lst)
{
	t_lst	*i;
	t_lst	*j;

	if (!lst->next)
		return (FALSE);
	i = lst;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->data == j->data)
			{
				return (TRUE);
			}
			j = j->next;
		}
		i = i->next;
	}
	return (FALSE);
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

t_stack	*generate_stack_a_content(char **srcs, int size)
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