/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:07:36 by plam              #+#    #+#             */
/*   Updated: 2021/12/06 13:57:07 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_loop(t_buff *lst, char **line, int nread, int fd)
{

}

int	err_or_cjoin(char **line, t_buff lst)
{
	*line = ft_strcjoin(*line, lst.buff);
	if (!*line)
		return (erase_err(line));
}

int	get_next_line(int fd, char **line)
{
	static t_buff	lst;
	int				err;

	*line = NULL;
	if (!line || fd < 0)
		return (-1);
	if (lst.buff[0] != '\0')
		err_or_cjoin(line, lst);
	while (checker(lst) == -1)
	{
		err = read(fd, lst.buff, BUFFER_SIZE);
		if (err == -1)
			return (erase_err(line));
		lst.buff[err] = '\0';
		*line = ft_strcjoin(*line, lst.buff);
		if (!*line)
			return (erase_err(line));
		if (err == 0)
			return (0);
	}
	ft_memmove(lst.buff, lst.buff + checker(lst.buff) + 1, \
		ft_strlen(lst.buff + checker(lst.buff) + 1) + 1);
	return (1);
}
