/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:31:01 by plam              #+#    #+#             */
/*   Updated: 2021/11/29 16:34:49 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

t_elm	*ft_lstnew(void *content)
{
	t_elm	*elm;

	elm = (t_elm *)malloc(sizeof(t_elm));
	if (elm == NULL)
		return (NULL);
	elm->target = content;
	elm->next = NULL;
	return (elm);
}
