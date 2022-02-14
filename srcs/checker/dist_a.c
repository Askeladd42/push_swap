/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dist_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:19:25 by plam              #+#    #+#             */
/*   Updated: 2022/02/14 16:16:48 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

int	dist_simple_rot(int size_a, int size_b, int fst, t_pos *pos)
{
	if (size_a - pos->a + pos->b < fst)
	{
		fst = size_a - pos->a + pos->b;
		pos->dist_a = size_a - pos->a;
		pos->dist_b = pos->b;
		pos->up_a = 0;
		pos->up_b = 1;
	}
	if (size_b - pos->b + pos->a < fst)
	{
		fst = size_b - pos->b + pos->a;
		pos->dist_a = pos->a;
		pos->dist_b = size_b - pos->b;
		pos->up_a = 1;
		pos->up_b = 0;
	}
	return (fst);
}

int	dist_double_rot(int fst, t_pos *pos)
{
	if (pos->a >= pos->b)
	{
		fst = pos->a;
		pos->dist_a = pos->a;
		pos->dist_b = 0;
		pos->up_a = 1;
		pos->up_b = 1;
	}
	else if (pos->b > pos->a)
	{
		fst = pos->b;
		pos->dist_b = pos->b;
		pos->dist_a = 0;
		pos->up_a = 1;
		pos->up_b = 1;
	}
	return (fst);
}

int	dist_double_rev(int size_a, int size_b, int fst, t_pos *pos)
{
	if (size_a - pos->a >= size_b - pos->b && size_a - pos->a < fst)
	{
		fst = size_a - pos->a;
		pos->dist_a = size_a - pos->a;
		pos->dist_b = 0;
		pos->up_a = 0;
		pos->up_b = 0;
	}
	else if (size_b - pos->b > size_a - pos->a && size_b - pos->b < fst)
	{
		fst = size_b - pos->b;
		pos->dist_b = size_b - pos->b;
		pos->dist_a = 0;
		pos->up_a = 0;
		pos->up_b = 0;
	}
	return (fst);
}

void	dist_to_a(int size_a, int size_b, t_pos *pos)
{
	int	fst;

	fst = ERR;
	fst = dist_double_rot(fst, pos);
	fst = dist_double_rev(size_a, size_b, fst, pos);
	fst = dist_simple_rot(size_a, size_b, fst, pos);
}
