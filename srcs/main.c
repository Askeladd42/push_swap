/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:12:42 by plam              #+#    #+#             */
/*   Updated: 2021/11/24 11:05:01 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
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

int	main(int ac, char **av)
{
	int		sort;
	t_tab	tab;
	t_stk	stk;
	t_pos	pos;
	t_move	move;

	tab = (t_tab){0, NULL, NULL, (t_seq){0, 0, NULL, NULL}};
	stk = (t_stk){0, 0, 0, NULL, NULL, NULL, NULL};
	pos = (t_pos){0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0};
	move = (t_move){0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	if (ac < 2)
		return (0);
	if (check_args(av, &tab) == -1)
		return (error(&tab, &stk));
	sort = first_sort(av, &tab);
	if (sort == -1)
		return (error_push_swap(&tab, &stk));
	else if (sort == 1)
		return (free_push_swap(&tab, &stk));
	if (solve(&tab, &stk, &pos, &move) == -1)
		return (error_push_swap(&tab, &stk));
	return (free_push_swap(&tab, &stk));
}