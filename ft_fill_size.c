/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:34:21 by morgani           #+#    #+#             */
/*   Updated: 2019/01/21 14:21:19 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_fill_size(t_conv *c, const char *format, int *i)
{
	int j;
	int	k;

	k = *i;
	j = 0;
	while (ft_check_flag_size(format[*i]))
	{
		c->sz = 1;
		c->sz_tp[j++] = format[(*i)++];
		if (j < 3)
			c->sz_tp[j] = '\0';
	}
	return (k == *i ? 0 : 1);
}
