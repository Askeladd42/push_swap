/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:54:44 by plam              #+#    #+#             */
/*   Updated: 2021/12/13 14:59:37 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_push_swap(t_tab *tab, t_stk *stk)
{
	free_push_swap(tab, stk);
	ft_putstr_fd(ERROR, 2);
	return (ERR);
}
