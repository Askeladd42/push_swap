/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_creation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:29:54 by plam              #+#    #+#             */
/*   Updated: 2021/11/24 12:33:34 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"


t_elm	*create_stk(t_tab *tab, t_stk *stk)
{
	int		i;
	t_elm	*first;
	t_elm	*elm;

	i = 1;
	elm = init_elm();
	if (elm == NULL)
		return (NULL);
	first = elm;
	while (i < tab->size)
	{
		elm->next = init_elm();
		if (elm->next == NULL)
		{
			stk->first_a = first;
			return (NULL);
		}
		elm = elm->next;
		i++;
	}
	stk->size_a = tab->size;
	return (first);
}
