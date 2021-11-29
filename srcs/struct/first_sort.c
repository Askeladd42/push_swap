/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:46:40 by plam              #+#    #+#             */
/*   Updated: 2021/11/29 14:09:29 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

int	check_sort(t_tab *tab)
{
	int	i;

	i = 0;
	if (tab->size == 1)
		return (OK);
	while (i < tab->size - 1 && tab->unsort[i] < tab->unsort[i + 1])
		i++;
	if (i == tab->size - 1)
		return (OK);
	return (KO);
}

int	first_sort(char **av, t_tab *tab)
{
	if (create_tab(av, tab) == ERR)
		return (ERR);
	if (check_sort(tab) == OK)
		return (OK);
	tab->sort = tab_alloc(tab->size);
	if (tab->sort == NULL)
		return (ERR);
	tab->sort = tabdup(tab->sort, tab->unsort, tab->size);
	insertion_sort(tab);
	if (double_num(tab) == ERR)
		return (ERR);
	return (KO);
}
