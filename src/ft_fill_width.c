/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:06:25 by morgani           #+#    #+#             */
/*   Updated: 2019/02/18 18:02:00 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int			ft_fill_width(t_conv *c, const char *format, int *i, va_list args)
{
	int		j;
	int		k;

	k = *i;
	while (format[*i] && (format[*i] == '*' || ft_isdigit(format[*i])))
	{
		if (format[*i] == '*')
		{
			c->wdth = va_arg(args, int);
			if (c->wdth < 0)
			{
				c->flg_tp.mns = 1;
				c->wdth *= -1;
			}
			(*i)++;
		}
		j = 0;
		while (format[*i] && ft_isdigit(format[*i]) && ++j)
			(*i)++;
		if (j)
			c->wdth = ft_natoi((char*)format + *i - j, j);
	}
	return (k == *i ? 0 : 1);
}
