/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:10:51 by morgani           #+#    #+#             */
/*   Updated: 2018/11/22 14:02:03 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_ispositive1(int n)
{
	return (n < 0 ? 0 : 1);
}

static int		ft_abs1(int n)
{
	return (n < 0 ? -n : n);
}

static int		size_n(int n)
{
	int		i;
	int		n2;

	n2 = n;
	i = 0;
	while (n2 != 0)
	{
		n2 = n2 / 10;
		i++;
	}
	return (n <= 0 ? i + 1 : i);
}

char			*ft_itoa(int n)
{
	int		signe;
	int		size;
	char	*str;
	int		mem;
	int		n2;

	n2 = n;
	str = NULL;
	signe = ft_ispositive1(n);
	size = size_n(n);
	mem = size;
	if (n2 == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (size >= 0)
	{
		size--;
		str[size] = ft_abs1(n) % 10 + '0';
		n = n / 10;
	}
	if (!(signe))
		str[0] = '-';
	str[mem] = '\0';
	return (str);
}
