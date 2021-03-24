/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:29:27 by plam              #+#    #+#             */
/*   Updated: 2021/03/24 08:22:05 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_frame	*stack_init(t_stack pos)
{
	t_frame	*frame;

	frame = malloc(sizeof(t_frame));
	if (frame == NULL)
		return (NULL);
	frame->next = NULL;
	frame->stack = pos;
	return (frame);
}

int	stack_push(t_frame **item, t_stack stack)
{
	t_frame	*old;

	old = *item;
	*item = stack_init(stack);
	if (*item == NULL)
		return (ERR);
	(*item)->next = old;
	return (OK);
}

t_stack	stack_pop(t_frame **item)
{
	t_stack	stack;
	t_frame	*old;

	if (*item == NULL)
		return ((t_stack){INT_MAX, INT_MIN});
	old = *item;
	*item = (*item)->next;
	stack = old->stack;
	free(old);
	return (stack);
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
