/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:39:05 by morgani           #+#    #+#             */
/*   Updated: 2018/11/22 16:45:11 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	real_atoi(const char *str, int i, int signe, long nb)
{
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == ' ' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb > 2147483648 && signe == -1)
			return (0);
		if (nb > 2147483647 && signe == 1)
			return (-1);
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * signe);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		signe;
	long	nb;

	i = 0;
	signe = 1;
	nb = 0;
	return (real_atoi(str, i, signe, nb));
}
