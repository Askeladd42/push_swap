/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_info.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:54:17 by plam              #+#    #+#             */
/*   Updated: 2022/02/09 16:11:43 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"
#include "struct.h"

int	n_arg(void)
{
	write(1, "No arguments given.\n", 20);
	return (FALSE);
}

int	check_info(char *arg)
{
	int	i;
	int	cnt;

	if (arg == NULL)
		return (n_arg());
	i = 0;
	cnt = 0;
	while (arg[i])
	{
		while (arg[i] == ' ')
			i++;
		if (arg[i] == '-' || arg[i] == '+')
			i++;
		if (arg[i] < '0' || arg[i] > '9')
			return (KO);
		while (arg[i] >= '0' && arg[i] <= '9')
			i++;
		cnt++;
		if (arg[i] != ' ' && arg[i] != '\0')
			return (KO);
		while (arg[i] == ' ')
			i++;
	}
	return (cnt);
}

int	check_args(char **av, t_tab *tab)
{
	int	i;
	int	cnt;

	i = 1;
	while (av[i])
	{
		cnt = check_info(av[i]);
		if (cnt == KO)
			return (ERR);
		tab->size += cnt;
		i++;
	}
	return (0);
}

int	double_num(t_tab *tab)
{
	int	i;

	i = 0;
	while (i < tab->size - 1)
	{
		if (tab->sort[i] == tab->sort[i + 1])
			return (ERR);
		i++;
	}
	return (0);
}

int	final_checker_order(t_stk *stk, t_tab *tab)
{
	if (stk->size_b != 0)
		return (FALSE);
	return (check_sort(tab));
}
