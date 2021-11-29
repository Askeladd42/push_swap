/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:25:02 by plam              #+#    #+#             */
/*   Updated: 2021/11/29 16:30:26 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	ft_lstclear(t_elm **lst, void (*del)(void *))
{
	t_elm	*tmp;

	if (lst != NULL && *lst != NULL && del != NULL)
	{
		tmp = *lst;
		while (tmp)
		{
			del((*lst)->target);
			tmp = (*lst)->next;
			free(*lst);
			*lst = tmp;
		}
	}
}
