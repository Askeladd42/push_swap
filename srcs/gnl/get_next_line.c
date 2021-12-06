/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:07:36 by plam              #+#    #+#             */
/*   Updated: 2021/12/06 14:03:24 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static t_buff	lst;
	int				err;

	*line = NULL;
	if (!line || fd < 0)
		return (-1);
	if (lst.buff[0] != '\0')
	{
		*line = ft_strcjoin(*line, lst.buff);
		if (!*line)
			return (clean(line));
	}
	while (checker(lst.buff) == -1)
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
	ft_memcmove(lst.buff, lst.buff + checker(lst.buff) + 1, \
		ft_strlen(lst.buff + checker(lst.buff) + 1) + 1);
	return (1);
}
