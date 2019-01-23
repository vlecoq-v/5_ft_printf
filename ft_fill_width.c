/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:06:25 by morgani           #+#    #+#             */
/*   Updated: 2019/01/21 12:50:00 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
				c->flg_tp.mns = 1;
			// printf("FT_FILL_WIDTH || '*' DETECTED\n");
			(*i)++;
		}
		j = 0;
		while (format[*i] && ft_isdigit(format[*i]) && ++j)
			(*i)++;
		if (j)
		{
			c->wdth = ft_natoi((char*)format + *i - j, j);
			// printf("FT_FILL_WIDTH || NUMBER DETECTED / len of numbers = %d\n", j);
		}
	}
	return (k == *i ? 0 : 1);
}
