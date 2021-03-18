/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:36:13 by plam              #+#    #+#             */
/*   Updated: 2021/03/18 17:16:20 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# define OK 1
# define ERR 0

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

#endif
