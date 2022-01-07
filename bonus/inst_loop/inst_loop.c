/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:59:26 by plam              #+#    #+#             */
/*   Updated: 2022/01/07 17:00:07 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap_bonus.h"

int	inst_loop(t_stack *stack, t_inst *inst)
{
	while (get_next_line(0, &inst->line) == 1)
	{
		if (check_inst(inst) == ERR)
			return (ERR);
		exec_moves(stack, inst->move);
		free_inst(&inst->line);
	}
	return (0);
}
