/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:12:13 by plam              #+#    #+#             */
/*   Updated: 2021/11/29 16:32:08 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	ft_lstdelone(t_elm *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->target);
		del(lst->push);
		free(lst);
	}
}
