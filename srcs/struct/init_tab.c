/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:32:55 by plam              #+#    #+#             */
/*   Updated: 2021/12/13 15:52:55 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

int	*tab_alloc(int size)
{
	int	*tab;

	tab = malloc(sizeof(int) * size);
	return (tab);
}

int	*tabdup(int *dst, int *src, int size)
{
	ft_memcpy(dst, src, size * sizeof(int));
	return (dst);
}

int	next_number(int n, char *arg)
{
	while (arg[n] == ' ')
		n++;
	if (arg[n] == '-' || arg[n] == '+')
		n++;
	while (arg[n] >= '0' && arg[n] <= '9')
		n++;
	while (arg[n] == ' ')
		n++;
	return (n);
}

int	set_numbers(char **av, t_tab *tab)
{
	int		i;
	int		j;
	int		n;
	long	tmp;

	i = 1;
	n = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			tmp = atol(av[i] + j);
			if (tmp > INT_MAX || tmp < INT_MIN)
				return (ERR);
			tab->unsort[n] = tmp;
			j = next_number(j, av[i]);
			n++;
		}
		i++;
	}
	return (OK);
}
