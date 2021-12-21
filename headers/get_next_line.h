/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:08:41 by plam              #+#    #+#             */
/*   Updated: 2021/12/21 14:55:54 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 128

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_buff
{
	char	buff[BUFFER_SIZE + 1];
}			t_buff;

int		clean(char **line);
int		checker(char *line);
int		get_next_loop(t_buff *lst, char **line, int nread, int fd);
int		get_next_line(int fd, char **line);
int		ft_strlen(char *s);
int		ft_strclen(const char *s, char c);
char	*ft_strcjoin(char *s1, char *s2);
void	ft_memcmove(void *dst, const void *src, size_t n);

#endif
