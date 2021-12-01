/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:29:27 by plam              #+#    #+#             */
/*   Updated: 2021/12/01 15:24:55 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

int	check_stack(t_elm *first, int size)
{
	int	old_target;
	t_elm	*elm;

	if (!first || !size)
		return (KO);
	elm = first;
	old_target = elm->target;
	while (elm)
	{
		if (elm->target < old_target)
			return (KO);
		old_target = elm->target;
		elm = elm->next;
	}
	return (OK);
}
