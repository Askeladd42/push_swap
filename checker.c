/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:29:27 by plam              #+#    #+#             */
/*   Updated: 2021/04/05 15:10:20 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	checker(int	*data)
{
	
}

void	check_sort(char *s_type)
{
	printf("OK\n");
	printf("KO\n");
}
int	main(int ac, char **av)
{
	if (ac > 1 && av[1])
	{
		check_sort(stdin);
		checker(av[1]);
	}
	else
		printf("Error\n");
	return (0);
}