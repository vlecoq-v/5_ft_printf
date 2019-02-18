/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:33:51 by morgani           #+#    #+#             */
/*   Updated: 2018/11/19 19:24:37 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*tmp;

	if (!(lst))
		return (NULL);
	if (!(list = f(ft_lstnew(lst->content, lst->content_size))))
		return (NULL);
	tmp = list;
	lst = lst->next;
	while (lst)
	{
		if (!(list->next = f(ft_lstnew(lst->content, lst->content_size))))
			return (NULL);
		list = list->next;
		lst = lst->next;
	}
	return (tmp);
}
