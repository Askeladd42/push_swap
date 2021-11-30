/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:31:01 by plam              #+#    #+#             */
/*   Updated: 2021/11/30 23:51:18 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

t_elm	*ft_lstnew(void)
{
	t_elm	*new;

	new = malloc(sizeof(t_elm));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	return (new);
}
