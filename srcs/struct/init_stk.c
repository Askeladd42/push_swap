/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:34:31 by plam              #+#    #+#             */
/*   Updated: 2021/11/24 12:33:24 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "instructions.h"

t_elm	*init_elm(void)
{
	t_elm	*elm;

	elm = ft_lstnew();
	if (elm != NULL)
		elm->push = 0;
	return (elm);
}

int	init_stack(t_tab *tab, t_stk *stk)
{
	stk->a = create_stack(tab, stk);
	if (stk->a == NULL)
		return (-1);
	stk->first_a = stk->a;
	target_stack(tab, stk->first_a);
	return (0);
}