/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:00:36 by plam              #+#    #+#             */
/*   Updated: 2021/12/21 15:44:35 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# define TRUE 1
# define FALSE 0

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

int		check_sort(t_tab *t);
int		first_sort(char **av, t_tab *tab);
int		create_tab(char **av, t_tab *tab);
int		*tab_alloc(int size);
int		*tabdup(int *dst, int *src, int size);
int		set_numbers(char **av, t_tab *tab);
void	insertion_sort(t_tab *tab);

t_elm	*init_elm(void);
int		init_stk(t_tab *tab, t_stk *stk);
t_elm	*create_stk(t_tab *tab, t_stk *stk);
void	reset_pos(t_pos *pos);
int		target_pos(t_tab *tab, int pos);
int		double_num(t_tab *tab);
void	target_stk(t_tab *tab, t_elm *elm);

int		stk_sort(t_elm *first, int size);

int		free_tab(int *tab);
int		free_stk(t_elm **first);

#endif