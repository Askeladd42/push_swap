/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:00:36 by plam              #+#    #+#             */
/*   Updated: 2021/10/04 12:57:06 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct s_lst	t_lst;

struct		t_lst
{
	int		data;
	t_lst	*next;
	t_lst	*prev;
};

t_lst		*add_first_lst(int data, t_lst *next);
t_lst		*add_last_lst(int data, t_lst *last);

void		free_all_lst(t_lst	*l);

t_lst		*get_last_lst(t_lst	*l);

typedef struct s_stk		t_stk;

struct		s_stk
{
	t_lst	*first;
	t_lst	*last;
	int		size;
};

t_stk		*malloc_stack(t_lst *first, t_lst *last, int size);
void		free_stack(t_stk *stk);

t_stk		*generate_stack_a_content(char **srcs, int size);

#endif