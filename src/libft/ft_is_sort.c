/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:20:03 by morgani           #+#    #+#             */
/*   Updated: 2018/11/21 14:27:01 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sort;

	i = 0;
	if (length == 0 || length == 1 || length == 2)
		return (1);
	while (f(tab[i], tab[i + 1]) == 0)
		i++;
	if (f(tab[i], tab[i + 1]) < 0)
		sort = -1;
	else
		sort = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0 && sort == 1)
			return (0);
		if (f(tab[i], tab[i + 1]) > 0 && sort == -1)
			return (0);
		i++;
	}
	return (1);
}
