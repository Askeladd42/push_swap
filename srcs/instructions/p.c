/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:02:25 by plam              #+#    #+#             */
/*   Updated: 2021/11/29 15:55:23 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	push(t_elm **to, t_elm **from)
{
	t_elm	*elm_push;
	t_elm	*tmp;

	if (*from == NULL)
		return ;
	elm_push = *from;
	if (elm_push->next)
	{
		tmp = elm_push->next->next;
		ft_lstadd_front(from, elm_push->next);
		elm_push->next->next = tmp;
		ft_lstadd_front(to, elm_push);
	}
	else
	{
		tmp = elm_push->next;
		*from = tmp;
		ft_lstadd_front(to, elm_push);
	}
}

void	do_push(t_stk *stk, int move)
{
	if (move == MOVE_PA)
	{
		push(&stk->first_a, &stk->first_b);
		stk->size_a++;
		stk->size_b--;
		write(1, "pa\n", 3);
	}
	else if (move == MOVE_PB)
	{
		push(&stk->first_b, &stk->first_a);
		stk->size_a--;
		stk->size_b++;
		write(1, "pb\n", 3);
	}
}
