/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:06:25 by morgani           #+#    #+#             */
/*   Updated: 2019/01/16 11:16:19 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_fill_width(t_conv *c, const char *format, int *i, va_list args)
{
	int		j;

	j = 0;
	c->wdth = 0;
	while (format[*i] && ft_isdigit(format[*i]) && ++j)
		(*i)++;
	if (j)
	{
		c->wdth = ft_natoi((char*)format + *i - j, j);
		// printf("FT_FILL_WIDTH || NUMBER DETECTED / len of numbers = %d\n", j);
	}
	if (format[*i] == '*')
	{
		c->wdth = va_arg(args, int);
		// printf("FT_FILL_WIDTH || '*' DETECTED\n");
		(*i)++;
	}
}
