/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:43:53 by plam              #+#    #+#             */
/*   Updated: 2021/11/22 14:46:56 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft.h"
# include "struct.h"
# include "instructions.h"

int	check_order(t_lst *l);
int check_sort();
int	check_info(char *arg);
int	select_algo(t_stk a, t_stk b, int size);

#endif