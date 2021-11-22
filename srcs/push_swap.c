/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:28:50 by plam              #+#    #+#             */
/*   Updated: 2021/11/22 14:56:56 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stk	stk;
	t_tab	tab;

	if (ac > 1)
	{
		if (str_is_digits(++*av) == FALSE)
			return (error_push_swap());
		if (check_info(*av) == FALSE)
			return (error_push_swap());
		else
		{
			
		}
	}
	return (0);
}
