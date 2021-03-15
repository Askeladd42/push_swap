/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:29:27 by plam              #+#    #+#             */
/*   Updated: 2021/03/15 17:35:58 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

t_frame	*stack_init(t_vec pos)
{
	t_frame	*frame;

	frame = malloc(sizeof(t_frame));
	if (frame == NULL)
		return (NULL);
	frame->next = NULL;
	frame->pos = pos;
	return (frame);
}

int	stack_push(t_frame **item, t_vec pos)
{
	t_frame	*old;

	old = *item;
	*item = stack_init(pos);
	if (*item == NULL)
		return (ERR);
	(*item)->next = old;
	return (OK);
}

t_vec	stack_pop(t_frame **item)
{
	t_vec	pos;
	t_frame	*old;

	if (*item == NULL)
		return ((t_vec){INT_MAX, INT_MIN});
	old = *item;
	*item = (*item)->next;
	pos = old->pos;
	free(old);
	return (pos);
}

int	stack_len(t_frame *item)
{
	int	i;

	i = 0;
	while (item != NULL)
	{
		item = item->next;
		i++;
	}
	return (i);
}


int	checker(int	*data)
{
	
}
