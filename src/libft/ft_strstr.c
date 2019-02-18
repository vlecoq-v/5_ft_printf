/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:28:30 by morgani           #+#    #+#             */
/*   Updated: 2018/11/17 16:53:16 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	int		j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < ft_strlen(haystack))
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (!(needle[j]))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
