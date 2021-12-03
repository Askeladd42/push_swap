/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:34:31 by plam              #+#    #+#             */
/*   Updated: 2021/12/03 14:23:55 by plam             ###   ########.fr       */
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

int	init_stk(t_tab *tab, t_stk *stk)
{
	stk->a = create_stack(tab, stk);
	if (stk->a == NULL)
		return (ERR);
	stk->first_a = stk->a;
	target_stk(tab, stk->first_a);
	return (OK);
}
