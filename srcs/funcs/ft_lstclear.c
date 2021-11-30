/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:25:02 by plam              #+#    #+#             */
/*   Updated: 2021/11/30 23:49:09 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	ft_lstclear(t_elm **lst)
{
	t_elm	*list;
	t_elm	*nxt;

	if (!lst)
		return ;
	list = *lst;
	while (list != NULL)
	{
		nxt = list->next;
		ft_lstdelone(list);
		list = nxt;
	}
	*lst = NULL;
}
