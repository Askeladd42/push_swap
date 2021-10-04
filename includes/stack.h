/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:00:36 by plam              #+#    #+#             */
/*   Updated: 2021/10/04 09:01:37 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ifndef STACK_H
def STACK_H

#ifndef PUSH_SWAP_LST_H
# define PUSH_SWAP_LST_H

typedef struct s_lst	t_lst;

struct		s_lst
{
	int		data;
	t_lst	*next;
	t_lst	*prev;
};

/*
** malloc new lst
*/

t_lst		*add_first_lst(int data, t_lst *next);
t_lst		*add_last_lst(int data, t_lst *last);

/*
** free and remove
*/

void		free_all_lst(t_lst	*l);

/*
** utils for lst
*/

t_lst		*get_last_lst(t_lst	*l);

#endif