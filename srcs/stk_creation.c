/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_creation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:29:54 by plam              #+#    #+#             */
/*   Updated: 2021/10/07 11:38:06 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"

int		str_is_digits(char *str)
{
	size_t	i;

	i = 0;
	if (str[i] == '-')
	{
		i++;
		if (!ft_isdigit(str[i]))
			return (FALSE);
	}
	while (str && str[i])
	{
		if (!ft_isdigit(str[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}


t_lst	*get_last_lst(t_lst *l)
{
	t_lst	*last;

	if (!l)
		return (NULL);
	last = l;
	while (last->next)
		last = last->next;
	return (last);
}

t_stk	*generate_stk_a_content(char **srcs, int size)
{
	t_stk	*stk;

	stk = malloc_stk(, NULL, size);
	while (*srcs)
	{
		stk->first=ft_atoi(*srcs);
		*srcs++;
	}
	stk->size = size;
	return (stk);
}