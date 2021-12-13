/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_creation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:13:29 by plam              #+#    #+#             */
/*   Updated: 2021/12/13 15:52:41 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

int	create_tab(char **av, t_tab *tab)
{
	tab->unsort = tab_alloc(tab->size);
	if (tab->unsort == NULL)
		return (ERR);
	if (set_numbers(av, tab) == ERR)
		return (ERR);
	return (OK);
}
