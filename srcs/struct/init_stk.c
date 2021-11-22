/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:34:31 by plam              #+#    #+#             */
/*   Updated: 2021/11/22 15:38:54 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

t_stk	*malloc_stack(t_lst *first, t_lst *last, int size)
{
	t_stk		*res;

	res = (t_stk *)malloc(sizeof(t_stk));
	if (res == NULL)
	{
		error_push_swap();
		return (NULL);
	}
	res->first = first;
	res->last = last;
	res->size = size;
	return (res);
}

void	free_stack(t_stk *stk)
{
	if (stk)
	{
		if (stk->first)
			free_all_lst(stk->first);
		free(stk);
	}
}
