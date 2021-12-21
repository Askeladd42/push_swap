/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:43:53 by plam              #+#    #+#             */
/*   Updated: 2021/12/21 14:17:44 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "struct.h"
# include "instructions.h"

void	ft_putstr_fd(char *s, int fd);

int		check_info(char *arg);
int		check_args(char **av, t_tab *tab);
int		solve(t_tab *tab, t_stk *stk, t_pos *pos, t_move *mov);

int		error_push_swap(t_tab *tab, t_stk *stk);
int		free_push_swap(t_tab *tab, t_stk *stk);

int		first_sort(char **av, t_tab *tab);
int		select_algo(t_stk a, t_stk b, int size);

#endif