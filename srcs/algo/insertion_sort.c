/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:52:54 by plam              #+#    #+#             */
/*   Updated: 2021/12/03 13:03:04 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	insertion_sort(t_tab *tab)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	while (i < tab->size - 1)
	{
		if (tab->sort[i + 1] < tab->sort[i])
		{
			j = i;
			x = tab->sort[j + 1];
			while (j > -1 && x < tab->sort[j])
			{
				tab->sort[j + 1] = tab->sort[j];
				j--;
			}
			tab->sort[j + 1] = x;
		}
		i++;
	}
}