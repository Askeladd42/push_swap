/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_creation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:13:29 by plam              #+#    #+#             */
/*   Updated: 2021/10/07 14:14:05 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"

t_lst	*get_last_lst(t_lst *l)
{
	t_lst	*last;

	if (!l)
		return (NULL);
	last = l;
	while (last->next)
		last = last->next;
	return (last);
}