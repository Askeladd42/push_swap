/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:54:44 by plam              #+#    #+#             */
/*   Updated: 2021/11/24 11:55:58 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

int	error_push_swap(t_tab *tab, t_stk *stk)
{
	free_struct(tab, stk);
	ft_putstr_fd(ERROR, 2);
	return (ERR);
}
