/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 09:56:14 by natakaha          #+#    #+#             */
/*   Updated: 2025/12/06 10:33:29 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	*extend_str(char *src, char *dest)
{
	char	*tmp;

	tmp = ft_strjoin(src, dest);
	free(src);
	return (tmp);
}

char	*get_line(int fd)
{
	char	*tmp;
	char	*line;
	int		i;

	line = NULL;
	tmp = (char *)ft_calloc(101, sizeof(char));
	if (!tmp)
		return (NULL);
	i = 100;
	while (i > 0)
	{
		i = read(fd, tmp, 100);
		line = extend_str(line, tmp);
		ft_bzero(tmp, 101);
	}
	return (line);
}