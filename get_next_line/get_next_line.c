/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:22:21 by ipenas            #+#    #+#             */
/*   Updated: 2021/04/30 11:25:03 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*clear(char **line, char *s, int res)
{
	char		*temp;
	int		index;

	index = 0;
	while (s[index])
	{	
		if (s[index] == '\n')
			break ;
		index++;
	}
	if (index < ft_strlen(s))
	{
		*line = ft_substr(s, 0, index);
		temp = ft_substr(s, index + 1, ft_strlen(s));
		free (s);
		s = ft_strdup(temp);
		free (temp);
	}
	else if (res == 0)
	{
		*line = s;
		s = NULL;
	}
	return (s);
}

char	*store(char *buff, char *s)
{
	char	*temp;

	if (s)
	{
		temp = ft_strjoin(s, buff);
		free (s);
		s = ft_strdup(temp);
		free(temp);
	}
	else
		s = ft_strdup(buff);
	return (s);
}

int	get_next_line(int fd, char **line)
{
	int			res;
	char		buff[BUFFER_SIZE + 1];
	static char	*s[FD_SIZE];

	if (fd < 0 || fd >= FD_SIZE || !line || (read(fd, s[fd], 0) < 0))
		return (-1);

	while (1)
	{
		res = read(fd, buff, BUFFER_SIZE);
		if (res < 0)
			return (-1);
		buff[res] = '\0';
		s[fd] = store(buff, s[fd]);
		if ((ft_strchr(buff, '\n')) || res == 0)
			break ;
	}
	if (res <= 0 && !s[fd])
	{
		*line = ft_strdup("");
		return (res);
	}
	s[fd] = clear(line,s[fd], res);
	if (res <= 0 && !s[fd])
		return (res);
	return (1);
}
