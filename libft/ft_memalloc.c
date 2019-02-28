/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:05:45 by morgani           #+#    #+#             */
/*   Updated: 2018/11/13 16:00:56 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	if (!(fresh = (void *)malloc(sizeof(void) * (size))))
		return (NULL);
	ft_bzero(fresh, size);
	return ((void *)fresh);
}
