/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 10:28:54 by morgani           #+#    #+#             */
/*   Updated: 2018/12/21 14:08:34 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print_words_tab(char **tab)
{
	int		i;

	i = 0;
	if (*tab)
	{
		while (tab[i])
		{
			ft_putstr(tab[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
