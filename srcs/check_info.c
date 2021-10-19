/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_info.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:54:17 by plam              #+#    #+#             */
/*   Updated: 2021/10/19 14:51:40 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"
#include "stack.h"

int	check_info(char *arg)
{
	int	i;

	i = 0;
	if (arg == NULL)
	{
		printf("No arguments given.\n");
		return (FALSE);
	}
	while (*arg)
	{
		while (*arg >= '0' && *arg <= '9')
			*arg++;
		if (*arg == ' ' || *arg == '\0')
			i++;
	}
	return (i);
}

int	check_order(t_lst *l)
{
	while (l && l->next)
	{
		if (l->data > l->next->data)
			return (FALSE);
		l = l->next;
	}
	return (TRUE);
}

int	final_checker_order(t_stack *a, t_stack *b)
{
	if (b->size != 0)
		return (FALSE);
	return (check_order(a->first));
}

void	record_info()

void	put_info(t_stk *stk)
{
	return;
}
