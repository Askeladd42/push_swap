/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:36:13 by plam              #+#    #+#             */
/*   Updated: 2021/04/08 15:35:31 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# define OK 1
# define KO 0
# define ERR -1

#include <unistd.h>
#include <stdio.h>
#include "./srcs/libft/libft.h"

typedef struct s_stack
{
	int			*a;
	int			*b;
	int			size;
}				t_stack;

typedef struct s_frame
{
	struct s_frame	*next;
	t_stack			stack;
}					t_frame;

int	check_info(char *arg);

#endif
