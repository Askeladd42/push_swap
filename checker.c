/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:29:27 by plam              #+#    #+#             */
/*   Updated: 2021/04/08 15:37:45 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	checker(int	*data)
{
	if (get_next_line(0, stdin) > 0)
		printf("%s\n", stdin);
	else
	{
		write(2, "Error\n", 6);
		return (ERR);
	}
}

void	check_sort(char *s_type, char *s_data)
{
	int	*data;
	int	i;

	data = malloc(sizeof(int) * check_info(s_data));
	if (data == NULL)
		return;
	i = 0;
	while (i < check_info(s_data))
	data[i++] = ft_atoi(*s_data);
	while (get_next_line(0, stdin) > 0)
		if (checker(data) == ERR)
			write(2, "Error\n", 6);
		else
			printf("KO\n");
	
}
int	main(int ac, char **av)
{
	int	inst;

	inst = 0;
	if (ac > 1 && av[1])
	{
		check_sort(inst, av[1]);
		if (checker(av[1]) == OK)
			printf("OK\n");
	}
	return (0);
}