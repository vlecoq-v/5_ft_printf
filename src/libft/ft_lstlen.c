/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 10:13:18 by morgani           #+#    #+#             */
/*   Updated: 2018/11/21 14:07:48 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstlen(t_list **alst)
{
	int		nb;
	t_list	*tmp;

	nb = 0;
	if (*alst)
	{
		tmp = *alst;
		while (tmp != NULL)
		{
			tmp = tmp->next;
			nb++;
		}
	}
	return (nb);
}
