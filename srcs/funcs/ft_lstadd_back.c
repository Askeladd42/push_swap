/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:07:30 by plam              #+#    #+#             */
/*   Updated: 2021/11/29 16:28:30 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	ft_lstadd_back(t_elm **alst, t_elm *new)
{
	t_elm	*current;

	if (!alst)
		return ;
	if (*alst != NULL)
	{
		current = *alst;
		while (current->next)
			current = current->next;
		current->next = new;
	}
	else
		*alst = new;
}
