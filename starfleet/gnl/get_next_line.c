/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntuzun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 18:54:56 by ntuzun            #+#    #+#             */
/*   Updated: 2018/11/04 20:05:18 by ntuzun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*find_newline(char *str)
{
	if (str == NULL)
		return (NULL);
	while (*str)
	{
		if (*str == '\n')
			return (str);
		str++;
	}
	return (NULL);
}

void		ft_concat(char **str, char *bf)
{
	size_t	len1;
	size_t	len2;
	char	*res;
	char	*tmp;
	int		i;

	i = 0;
	tmp = *str;
	len1 = ft_strlen(tmp);
	len2 = ft_strlen(bf);
	res = malloc(len1 + len2 + 1);
	while (tmp != NULL && *tmp)
		res[i++] = *tmp++;
	while (*bf)
		res[i++] = *bf++;
	res[i] = '\0';
	if (*str != NULL)
		free(*str);
	*str = res;
}

void		lookahead(char **str, char *new_position)
{
	char	*p;

	p = ft_strdup(new_position);
	free(*str);
	*str = p;
}

int			process_read(char **line, char **total, ssize_t read_ret)
{
	if (read_ret == 0)
	{
		if (*total != NULL)
		{
			*line = *total;
			*total = NULL;
			return (1);
		}
		else
			return (0);
	}
	else if (read_ret < 0)
		return (-1);
	return (2);
}

int			get_next_line(const int fd, char **line)
{
	static char	*total = NULL;
	ssize_t		read_ret;
	char		buffer[BUFF_SIZE + 1];
	char		*new_line;
	int			i;

	while ((new_line = find_newline(total)) == NULL)
	{
		read_ret = read(fd, buffer, BUFF_SIZE);
		i = process_read(line, &total, read_ret);
		if (i != 2)
			return (i);
		buffer[read_ret] = 0;
		ft_concat(&total, buffer);
	}
	*line = total;
	if (new_line[1] == 0)
		total = NULL;
	else
		lookahead(&total, new_line + 1);
	*new_line = 0;
	return (1);
}
