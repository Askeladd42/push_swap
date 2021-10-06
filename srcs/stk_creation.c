/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_creation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:29:54 by plam              #+#    #+#             */
/*   Updated: 2021/10/06 14:42:59 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"

t_stk	*generate_stk_a_content(char **srcs, int size)
{
	t_stk	*stk;

	stk = malloc_stk(, NULL, size);
	while (*srcs)
	{
		stk->first=ft_atoi(*srcs);
		*srcs++;
	}
	stk->size = size;
	return (stk);
}