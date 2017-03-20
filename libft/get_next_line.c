/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 10:32:07 by bbrunell          #+#    #+#             */
/*   Updated: 2016/01/19 10:32:17 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_end(char *s1)
{
	int		i;

	i = 0;
	if (!s1)
		return (-1);
	while (s1[i])
	{
		if (s1[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static void	get_next_1(char **line, char **buffer)
{
	*line = ft_strnew(0);
	*buffer = ft_strnew(BUFF_SIZE);
}

static void	get_next_2(char **line, char **buffer)
{
	*line = ft_strjoin(*line, *buffer);
	*buffer = ft_strnew(BUFF_SIZE);
}

static int	get_next_3(char **line, char **buffer, int ret)
{
	if (ret == 0 && *line[0] != '\0')
		return (1);
	*buffer = ft_strsub(*buffer, 0, ret);
	*line = ft_strjoin(*line, *buffer);
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	int			ret;
	char		*buffer;
	static char *str[256];

	if (fd < 0 || !line)
		return (-1);
	get_next_1(line, &buffer);
	while ((ret = read(fd, buffer, BUFF_SIZE)) >= 0)
	{
		if (ret == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
			return (*line[0] != '\0' ? 1 : 0);
		if (str[fd])
		{
			buffer = ft_strjoin(str[fd], buffer);
			str[fd] = NULL;
		}
		if ((ret = ft_check_end(buffer)) == -1)
			get_next_2(line, &buffer);
		else
		{
			str[fd] = ft_strsub(buffer, ret + 1, (ft_strlen(buffer) - 1));
			return (get_next_3(line, &buffer, ret));
		}
	}
	return (-1);
}
