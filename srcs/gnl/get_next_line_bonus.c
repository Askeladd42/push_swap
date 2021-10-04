/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 10:34:52 by plam              #+#    #+#             */
/*   Updated: 2019/11/27 15:08:15 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		checker(char *line)
{
	int i;

	i = 0;
	while (line[i])
	{
		if (line[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

t_list	*free_mail(t_list **current)
{
	t_list	*tmp;

	tmp = *current;
	tmp->next = (*current)->next;
	*current = (*current)->next;
	free(*current);
	*current = NULL;
	return (tmp);
}

int		get_next_line(int fd, char **line)
{
	static t_list	*l1 = NULL;
	t_list			*lst;
	int				err;

	*line = NULL;
	if (!line || fd < 0)
		return (-1);
	lst = find_lst(fd, &l1);
	if (lst->line[0] != '\0')
		if (!(*line = ft_strcjoin(*line, lst->line)))
			return (-1);
	while (checker(lst->line) == -1)
	{
		if ((err = read(fd, lst->line, BUFFER_SIZE)) == -1)
			return (-1);
		lst->line[err] = '\0';
		if (!(*line = ft_strcjoin(*line, lst->line)))
			return (-1);
		if (err == 0)
			return (0);
	}
	ft_memmove(lst->line, lst->line + checker(lst->line) + 1, \
		ft_strlen(lst->line + checker(lst->line) + 1) + 1);
	lst = free_mail(&lst);
	return (1);
}
