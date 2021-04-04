/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:28:50 by plam              #+#    #+#             */
/*   Updated: 2021/04/04 11:02:52 by plam             ###   ########.fr       */
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

void	rec_info(char *arg)
{
	int	i;
	int	size;
	int	*tab;

	if (size = check_info(arg) < 1)
	{
		printf("Error\n");
		return;
	}
	tab = malloc(sizeof(int) * check_info(arg));
	if (tab == NULL)
		return;
	i = 0;
	while (i < size)
	{
		while (*arg)
		{
			if (*arg >= '0' && *arg <= '9')
				tab[i++] = ft_atoi(*arg);
			while (*arg == ' ' || *arg == '\0')
				*arg++;
		}
	}
	tab[i] = NULL;
}
