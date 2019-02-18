/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:00:14 by morgani           #+#    #+#             */
/*   Updated: 2018/11/17 16:52:18 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*ptr;
	size_t		i;

	ptr = (char *)s;
	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == '\0' && c == '\0')
			return ((char*)&s[i]);
		if (s[i] == (char)c)
			ptr = (char*)&s[i];
		i++;
	}
	return ((*ptr == c) ? ptr : NULL);
}
