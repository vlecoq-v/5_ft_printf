/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_prec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 10:53:24 by morgani           #+#    #+#             */
/*   Updated: 2019/02/14 12:07:41 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_fill_prec(t_conv *c, const char *format, int *i, va_list args)
{
	int		j;
	int		k;

	k = *i;
	j = 0;
	c->prc = (format[*i] == '.' || c->prc) ? 1 : 0;
	if (c->prc && format[*i] == '.')
	{
		(*i)++;
		while (format[*i] && ft_isdigit(format[*i]) && ++j)
			(*i)++;
		if (j)
			c->prc_sz = ft_natoi((char*)format + *i - j, j);
		if (format[*i] == '*')
		{
			if ((c->prc_sz = va_arg(args, int)) < 0)
			{
				c->prc_sz = 0;
				c->prc = 0;
			}
			(*i)++;
		}
	}
	return (k == *i ? 0 : 1);
}
