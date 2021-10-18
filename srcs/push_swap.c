/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:28:50 by plam              #+#    #+#             */
/*   Updated: 2021/10/18 13:12:32 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"

/*int	check_info(char *arg)
{
	int	i;

	i = 0;
	if (arg == NULL)
	{
		printf("Error\n");
		return (0);
	}
	while (*arg)
	{
		while (*arg >= '0' && *arg <= '9')
			*arg++;
		if (*arg == ' ' || *arg == '\0')
			i++;
	}
	return (i - 1);
}

int	rec_info(char *arg, t_stk stk)
{
	int	i;
	int	size;

	if (size = check_info(arg) < 1)
	{
		write(2, "Error\n", 6);
		return (ERR);
	}
	size = check_info(arg);
	stk.a = malloc(sizeof(int) * size);
	if (stk.first == NULL)
		return (NULL);
	stk.b = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		stack.last[i] = NULL;
		while (*arg)
		{
			if (*arg >= '0' && *arg <= '9')
				stack.a[i++] = ft_atoi(*arg);
			while (*arg == ' ' || *arg == '\0')
				*arg++;
		}
	}
	stk.first[i] = NULL;
	return (OK);
}
*/

int	main(int ac, char **av)
{
	t_stk	stk;

	if (ac > 1)
	{
		if (str_is_digits(++*av) == FALSE)
			exit_error_push_swap();
	}
	return (0);
}