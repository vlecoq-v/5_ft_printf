/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:14:50 by morgani           #+#    #+#             */
/*   Updated: 2018/12/04 16:15:15 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin_free(char *line, char *tmp, int len)
{
	char	*str;

	str = NULL;
	if (!line || !tmp)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(*str) * (ft_strlen(line)
			+ ft_strlen(tmp) + 1))))
		return (NULL);
	ft_strcpy(str, line);
	ft_strncat(str, tmp, len);
	free(line);
	return (str);
}
