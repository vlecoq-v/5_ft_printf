/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:04:51 by morgani           #+#    #+#             */
/*   Updated: 2018/11/17 16:34:48 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		dest_long;
	int		i;

	dest_long = ft_strlen(s1);
	i = 0;
	while (s2[i])
	{
		s1[dest_long + i] = s2[i];
		i++;
	}
	s1[dest_long + i] = '\0';
	return (s1);
}
