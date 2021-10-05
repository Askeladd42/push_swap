/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:39:04 by plam              #+#    #+#             */
/*   Updated: 2021/10/05 13:17:21 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H

# define OK 1
# define ERR -1

# include "stack.h"

# include <stdio.h>

void	pa(t_stk *stk);
void	pb(t_stk *stk);
void	pp(t_stk *stk);

void	sa(t_stk *stk);
void	sb(t_stk *stk);
void	ss(t_stk *stk);

void	ra(t_stk *stk);
void	rb(t_stk *stk);
void	rr(t_stk *stk);

void	rra(t_stk *stk);
void	rrb(t_stk *stk);
void	rrs(t_stk *stk);

#endif