/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:28:50 by plam              #+#    #+#             */
/*   Updated: 2021/11/22 14:52:04 by plam             ###   ########.fr       */
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
			exit_error_push_swap();
		if (check_info(*av) == FALSE)
			exit_error_push_swap();
		else
		{
			lst = get_all_values_to_lst(av, check_info(av[1]));
			if (is_duplicate_data(lst) == FALSE || )
				exit_error_push_swap();
			a = generate_stack_a_content(av, check_info(av[1]));
			b = malloc_stk(NULL, NULL, check_info(av[1]));
		}
	}
	return (0);
}
