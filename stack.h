/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:36:13 by plam              #+#    #+#             */
/*   Updated: 2021/03/16 09:47:10 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# define TRUE 1
# define FALSE 0

#include <unistd.h>
#include <stdio.h>

typedef struct s_vec
{
	int			x;
	int			y;
}				t_vec;

typedef struct s_frame
{
	struct s_frame	*next;
	t_vec			pos;
}					t_frame;

typedef struct s_proj
{
	t_vec	pr;
	t_vec	n;
}				t_proj;

#endif
