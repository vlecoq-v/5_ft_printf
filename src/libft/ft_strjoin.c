/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:06:11 by morgani           #+#    #+#             */
/*   Updated: 2018/11/17 16:35:47 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		if (!(str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) +
							ft_strlen(s2) + 1))))
			return (NULL);
		ft_strcat(ft_strcpy(str, (char *)s1), s2);
		str[ft_strlen(s1) + ft_strlen(s2) + 1] = '\0';
	}
	return (str);
}
