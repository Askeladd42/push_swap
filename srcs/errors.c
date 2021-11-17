/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:54:44 by plam              #+#    #+#             */
/*   Updated: 2021/10/07 09:53:30 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"

int	error_push_swap(void)
{
	ft_putstr_fd("Error\n", 2);
	return (ERR);
}

void	exit_error_push_swap(void)
{
	error_push_swap();
	exit(ERR);
}
