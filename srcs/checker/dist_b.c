/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dist_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:41:15 by plam              #+#    #+#             */
/*   Updated: 2021/12/01 14:00:17 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"


int	is_target(int target, int size, int *lis)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (target == lis[i])
			return (OK);
		i++;
	}
	return (KO);
}

void	set_push_elm(int size, int lis_size, int *lis, t_elm *elm)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (is_target(i, lis_size, lis) == KO)
		{
			elm->push = 1;
		}
		i++;
		elm = elm->next;
	}
}

int	next_elm_to_push(t_elm *elm)
{
	int	i;

	i = 0;
	while (elm)
	{
		if (elm->push == 1)
			return (i);
		i++;
		elm = elm->next;
	}
	return (0);
}
