/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_inst2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:33:01 by plam              #+#    #+#             */
/*   Updated: 2021/11/22 15:40:09 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

void	print_rrb(t_stk *b)
{
	rrb(b);
	printf("rrb\n");
}

void	print_sa(t_stk *a)
{
	sa(a);
	printf("sa\n");
}

void	print_sb(t_stk *b)
{
	sb(b);
	printf("sb\n");
}
