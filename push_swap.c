/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:28:50 by plam              #+#    #+#             */
/*   Updated: 2021/04/04 11:19:19 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	check_info(char *arg)
{
	int	i;

	i = 0;
	if (arg == NULL)
	{
		printf("Error\n");
		return (0);
	}
	while (*arg)
	{
		while (*arg >= '0' && *arg <= '9')
			*arg++;
		if (*arg == ' ' || *arg == '\0')
			i++;
	}
	return (i - 1);
}

void	rec_info(char *arg, t_stack stack)
{
	int	i;
	int	size;

	if (size = check_info(arg) < 1)
	{
		printf("Error\n");
		return;
	}
	size = check_info(arg);
	stack.a = malloc(sizeof(int) * size);
	if (stack.a == NULL)
		return;
	stack.b = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		stack.b[i] = NULL;
		while (*arg)
		{
			if (*arg >= '0' && *arg <= '9')
				stack.a[i++] = ft_atoi(*arg);
			while (*arg == ' ' || *arg == '\0')
				*arg++;
		}
	}
	stack.a[i] = NULL;
}
