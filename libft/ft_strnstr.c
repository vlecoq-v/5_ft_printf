/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:55:22 by morgani           #+#    #+#             */
/*   Updated: 2018/11/20 17:50:49 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i + j < len && i < ft_strlen(haystack) && !(len < ft_strlen(needle)))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j < len))
		{
			j++;
			if (!(needle[j]))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
