/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shft_seq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:49:19 by plam              #+#    #+#             */
/*   Updated: 2021/12/01 15:22:10 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	shift_tab(t_seq *seq, t_tab *tab)
{
	int	i;
	int	tmp;

	while (tab->unsort[0] != tab->sort[0])
	{
		i = 0;
		tmp = tab->unsort[0];
		while (i < tab->size - 1)
		{
			tab->unsort[i] = tab->unsort[i + 1];
			i++;
		}
		tab->unsort[i] = tmp;
		seq->shift++;
	}
}

void	shift_seq(t_seq *seq, int size)
{
	int	i;

	i = 0;
	if (seq->shift == 0)
		return ;
	while (i < seq->size)
	{
		if (seq->lis[i] + seq->shift > size - 1)
			seq->lis[i] = seq->shift + seq->lis[i] - size;
		else
			seq->lis[i] = seq->shift + seq->lis[i];
		i++;
	}
}
