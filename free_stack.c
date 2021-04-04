/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 11:59:37 by plam              #+#    #+#             */
/*   Updated: 2021/04/04 12:08:07 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	free_stack(t_stack stack)
{
	int	i;

	i = 0;
	while (i < stack.size)
	{
		free(stack.a[i]);
		free(stack.b[i]);
		i++;
	}
	free(stack.a);
	free(stack.b);
	free(stack);
}