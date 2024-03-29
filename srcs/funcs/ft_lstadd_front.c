/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:10:13 by plam              #+#    #+#             */
/*   Updated: 2022/01/11 18:00:14 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	ft_lstadd_front(t_elm **alst, t_elm *new)
{
	if (!alst && !new)
		return ;
	new->next = *alst;
	*alst = new;
}
