/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:26:42 by morgani           #+#    #+#             */
/*   Updated: 2018/11/21 14:27:54 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_integer_table(int *tab, int size, int order)
{
	int i;

	i = 0;
	if (tab)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1] && order == 1)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				i = 0;
			}
			else if (tab[i] < tab[i + 1] && order == -1)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				i = 0;
			}
			else
				i++;
		}
	}
}
