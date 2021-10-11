/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:32:55 by plam              #+#    #+#             */
/*   Updated: 2021/10/11 09:52:42 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

static t_lst	create_lst(int data, t_lst *next, t_lst *prev)
{
	t_lst	l;

	l.data = data;
	l.next = next;
	l.prev = prev;
	return (l);
}


t_lst	*add_first_lst(int data, t_lst *next)
{
	t_lst	*add;

	add = (t_lst *)malloc(sizeof(t_lst));
	if (add == NULL)
	{
		error_push_swap();
		return (NULL);
	}
	*add = create_lst(data, next, NULL);
	return (add);
}

/*
** add = last
*/

t_lst	*add_last_lst(int data, t_lst *last)
{
	t_lst	*add;

	add = (t_lst *)malloc(sizeof(t_lst));
	if (add == NULL)
	{
		error_push_swap();
		return (NULL);
	}
	*add = create_lst(data, NULL, last);
	if (last)
		last->next = add;
	return (add);
}

void	free_all_lst(t_lst *l)
{
	t_lst	*tmp;

	while (l)
	{
		tmp = l->next;
		free(l);
		l = tmp;
	}
}