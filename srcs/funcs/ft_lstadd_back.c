/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:07:30 by plam              #+#    #+#             */
/*   Updated: 2021/11/30 23:41:31 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	ft_lstadd_back(t_elm **alst, t_elm *new)
{
	if (!alst || !new)
		return ;
	if (*alst != NULL)
		*alst = new;
	else
		ft_lstlast(*alst)->next = new;
}
