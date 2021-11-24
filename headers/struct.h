/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:00:36 by plam              #+#    #+#             */
/*   Updated: 2021/11/24 11:25:36 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# define TRUE 1
# define FALSE 0

/*typedef struct s_lst
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
*/

typedef struct s_seq
{
	int	size;
	int	shift;
	int	*lis;
	int	*tmp;
}				t_seq;

typedef struct s_tab
{
	int		size;
	int		*sort;
	int		*unsort;
	t_seq	seq;
}				t_tab;

typedef struct s_elm
{
	int				target;
	int				push;
	struct s_elm	*next;
}				t_elm;

typedef struct s_stk
{
	int				dst;
	int				size_a;
	int				size_b;
	struct s_elm	*a;
	struct s_elm	*b;
	struct s_elm	*first_a;
	struct s_elm	*first_b;
}				t_stk;

typedef struct s_pos
{
	int	a;
	int	b;
	int	old_a;
	int	old_b;
	int	dist_a;
	int	dist_b;
	int	old_dist_a;
	int	old_dist_b;
	int	up_a;
	int	up_b;
	int	old_up_a;
	int	old_up_b;
}				t_pos;

#endif