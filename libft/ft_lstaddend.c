/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 09:32:13 by morgani           #+#    #+#             */
/*   Updated: 2018/12/06 19:04:13 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list *tmp;

	if (new)
	{
		tmp = *alst;
		new->next = NULL;
		if ((*alst) == NULL)
			*alst = new;
		else
		{
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = new;
		}
	}
}
