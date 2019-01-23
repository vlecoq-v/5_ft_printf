/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:34:21 by morgani           #+#    #+#             */
/*   Updated: 2019/01/23 12:39:25 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_fill_size(t_conv *c, const char *format, int *i)
{
	int j;
	int	k;

	k = *i;
	j = 0;
	if (c->sz_tp[0] && ft_check_flag_size(format[*i]))
	{
		(*i)++;
		return (1);
	}
	while (ft_check_flag_size(format[*i]) && j < 2)
	{
		c->sz = 1;
		c->sz_tp[j++] = format[(*i)++];
		if (j < 2)
			c->sz_tp[j] = '\0';
	}
	if (c->sz_tp[0] != c->sz_tp[1] && j > 1)
		c->sz_tp[1] = '\0';
	return (k == *i ? 0 : 1);
}
