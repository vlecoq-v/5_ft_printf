/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:32:13 by morgani           #+#    #+#             */
/*   Updated: 2018/11/20 16:38:41 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	d;
	unsigned int	s;

	d = ft_strlen(dst);
	if (size < d)
		return (ft_strlen(src) + size);
	s = 0;
	while (d < (size - 1) && src[s] != '\0')
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = '\0';
	while (src[s] != '\0')
	{
		d++;
		s++;
	}
	return (d);
}
