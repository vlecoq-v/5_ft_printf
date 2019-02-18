/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:21:21 by morgani           #+#    #+#             */
/*   Updated: 2018/12/21 15:01:10 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				get_next_line(const int fd, char **line)
{
	int				ret;
	static char		stck[OPEN_MAX][BUFF_SIZE + 1];
	char			*t;

	t = stck[fd];
	if (fd < 0 || BUFF_SIZE < 1 || !line || read(fd, stck[fd], 0) < 0
		|| !(*line = ft_strnew(0)))
		return (-1);
	while (1)
	{
		if (ft_strchr(t, '\n'))
		{
			if (!((*line) = ft_strjoin_free(*line, t, ft_strchr(t, '\n') - t)))
				return (-1);
			ft_strncpy(t, &t[ft_strchr(t, '\n') - t + 1],
					BUFF_SIZE - (ft_strchr(t, '\n') - t));
			return (1);
		}
		if (!((*line) = ft_strjoin_free(*line, t, BUFF_SIZE))
			|| (ret = read(fd, stck[fd], BUFF_SIZE)) == -1)
			return (-1);
		t[ret] = '\0';
		if (ret == 0)
			return ((**line != 0) ? 1 : 0);
	}
}
