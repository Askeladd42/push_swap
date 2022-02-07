/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:07:36 by plam              #+#    #+#             */
/*   Updated: 2022/02/07 14:10:08 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	init_line(int fd, char **line)
{
	*line = NULL;
	if (!line || fd < 0)
		return (-1);
	return (0);
}

int	get_next_line(int fd, char **line)
{
	static t_buff	lst;
	int				err;

	init_line(fd, line);
	if (lst.buff[0] != '\0')
	{
		*line = ft_strcjoin(*line, lst.buff);
		if (!*line)
			return (clean(line));
	}
	while (check(lst.buff) == -1)
	{
		err = read(fd, lst.buff, BUFFER_SIZE);
		if (err == -1)
			return (clean(line));
		lst.buff[err] = '\0';
		*line = ft_strcjoin(*line, lst.buff);
		if (!*line)
			return (clean(line));
		if (err == 0)
			return (0);
	}
	ft_memmove(lst.buff, lst.buff + check(lst.buff) + 1, \
		ft_strlen(lst.buff + check(lst.buff) + 1) + 1);
	return (1);
}
