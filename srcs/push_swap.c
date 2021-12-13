/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:28:50 by plam              #+#    #+#             */
/*   Updated: 2021/12/13 16:09:49 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (check_args(av, &tab) == ERR)
		return (error_push_swap(&tab, &stk));
	sort = first_sort(av, &tab);
	if (sort == ERR)
		return (error_push_swap(&tab, &stk));
	else if (sort == OK)
		return (free_push_swap(&tab, &stk));
	if (solve(&tab, &stk, &pos, &move) == ERR)
		return (error_push_swap(&tab, &stk));
	return (free_push_swap(&tab, &stk));
}
