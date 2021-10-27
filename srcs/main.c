/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:12:42 by plam              #+#    #+#             */
/*   Updated: 2021/10/27 12:13:09 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stk		*a;
	t_stk		*b;

	if (argc < 2)
		return (0);
	a = generate_stack_a_content(argv, argc);
	if (!a)
		return (ERR);
	b = malloc_stack(NULL, NULL, 0);
	if (!b)
	{
		free_stack(a);
		return (ERR);
	}
	select_algo(a, b, a->size);
	free_stack(a);
	free_stack(b);
	return (0);
}