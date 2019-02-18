/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 12:15:00 by morgani           #+#    #+#             */
/*   Updated: 2018/11/21 09:32:00 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printlist(t_list *list)
{
	if (list)
	{
		while (list)
		{
			ft_putstr(list->content);
			ft_putchar('\n');
			list = list->next;
		}
	}
}
