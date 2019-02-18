/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 08:33:43 by morgani           #+#    #+#             */
/*   Updated: 2018/11/22 09:25:54 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * (ft_strlen(s1) + 1))))
		return (NULL);
	ft_strcpy(dest, s1);
	return (dest);
}
