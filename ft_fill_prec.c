/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_prec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 10:53:24 by morgani           #+#    #+#             */
/*   Updated: 2019/01/14 14:47:31 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_fill_prec(t_conv *c, const char *format, int *i, va_list args)
{
	int		j;

	j = 0;
	c->prc = (format[*i] == '.') ? 1 : 0;
	c->prc_sz = 0;
	if (c->prc)
	{
		(*i)++;
		while (format[*i] && ft_isdigit(format[*i]) && ++j)
			(*i)++;
		if (j)
			c->prc_sz = ft_natoi((char*)format + *i - j, j);
		if (format[*i] == '*')
		{
			c->prc_sz = va_arg(args, int);
			(*i)++;
		}
	}
}
