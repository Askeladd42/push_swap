/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:43:53 by plam              #+#    #+#             */
/*   Updated: 2021/11/24 12:11:52 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft.h"
# include "struct.h"
# include "instructions.h"

int	check_order(t_tab *t);
int check_sort(t_tab *t);
int	check_info(char *arg);
int	check_args(char **av, t_tab *tab);

int	error_push_swap(t_tab *tab, t_stk *stk);

int	select_algo(t_stk a, t_stk b, int size);
int	push_swap(t_tab tab, t_stk stk);

#endif