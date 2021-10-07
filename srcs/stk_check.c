/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:05:23 by plam              #+#    #+#             */
/*   Updated: 2021/10/07 13:54:43 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "instructions.h"

int	dup_check(char **str)
{
	return (TRUE);
}

int	correct_lst_format(char **str)
{
	int	cnt;

	cnt = 0;
	while (*str++)
	{
		if (str_is_digits(*str) == FALSE || dup_check(*str) == FALSE)
			exit_error_push_swap();
		cnt++;
	}
	return (cnt);
}