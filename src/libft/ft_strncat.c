/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:52:46 by morgani           #+#    #+#             */
/*   Updated: 2018/11/14 10:25:57 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int			dest_long;
	size_t		i;

	dest_long = ft_strlen(s1);
	i = 0;
	while (s2[i] && i < n)
	{
		s1[dest_long + i] = s2[i];
		i++;
	}
	s1[dest_long + i] = '\0';
	return (s1);
}
