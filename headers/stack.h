/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:00:36 by plam              #+#    #+#             */
/*   Updated: 2021/10/27 12:09:51 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# define TRUE 1
# define FALSE 0

typedef struct s_lst
{
	int		data;
	t_lst	*next;
	t_lst	*prev;
}			t_lst;

t_lst		*add_first_lst(int data, t_lst *next);
t_lst		*add_last_lst(int data, t_lst *last);

void		free_all_lst(t_lst	*l);

t_lst		*get_last_lst(t_lst	*l);

typedef struct s_stk
{
	t_lst	*first;
	t_lst	*last;
	int		size;
}			t_stk;

t_stk		*malloc_stk(t_lst *first, t_lst *last, int size);
void		free_stk(t_stk *stk);

t_stk		*generate_stk_a_content(char **srcs, int size);

#endif