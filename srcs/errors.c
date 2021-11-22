/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:54:44 by plam              #+#    #+#             */
/*   Updated: 2021/11/22 14:46:19 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

int	error_push_swap(void)
{
	free_struct(tab, stk);
	ft_putstr_fd("Error\n", 2);
	return (ERR);
}

