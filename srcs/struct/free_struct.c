/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:06:46 by plam              #+#    #+#             */
/*   Updated: 2021/12/29 12:14:19 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

int	free_tab(int *tab)
{
	if (tab)
		free(tab);
	tab = NULL;
	return (OK);
}

int	free_stk(t_elm **first)
{
	if (*first)
		ft_lstclear(first);
	return (OK);
}

int	free_push_swap(t_tab *tab, t_stk *stk)
{
	free_tab(tab->sort);
	free_tab(tab->unsort);
	free_tab(tab->seq.lis);
	free_tab(tab->seq.tmp);
	free_stk(&stk->first_a);
	free_stk(&stk->first_b);
	return (OK);
}
