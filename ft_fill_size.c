/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:34:21 by morgani           #+#    #+#             */
/*   Updated: 2019/01/14 14:47:34 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_fill_size(t_conv *c, const char *format, int *i)
{
	int j;

	j = 0;
	while (ft_check_flag_size(format[*i]))
	{
		c->sz = 1;
		c->sz_tp[j++] = format[(*i)++];
	}
	c->sz_tp[j] = '\0';
}
