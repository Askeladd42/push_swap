/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_info.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:54:17 by plam              #+#    #+#             */
/*   Updated: 2021/03/26 22:37:48 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	check_info(char *arg)
{
	int	i;

	i = 0;
	if (arg == NULL)
	{
		printf("No arguments given.\n");
		return (0);
	}
	while (*arg)
	{
		if (*arg == ' ' || *arg == '\0')
			i++;
		*arg++;
	}
	return (i);
}

void	put_info(t_stack stack)
{
	
}
