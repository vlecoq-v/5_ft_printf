/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:46:02 by morgani           #+#    #+#             */
/*   Updated: 2019/01/25 09:48:35 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_fill_arg(t_conv *c, va_list args)
{
	if (c->tp != '%' && c->tp && c->tp != '!')
		c->arg = va_arg(args, void*);
	if (c->tp == 's')
		if (!(c->str = ((int)c->arg == 0 ?
				ft_strdup("(null)") : ft_strdup((char*)c->arg))))
			return (0);
	if (c->tp == 'c')
	{
		if ((int)c->arg == 0)
		{
			c->wdth--;
			if (!(c->str = ft_strdup("")))
				return (0);
		}
		else
		{
			if (!(c->str = ft_strdup(" ")))
				if (!(c->str[0] = (char)c->arg))
					return (0);
		}
	}
	else if (c->tp == 'f')
		c->arg_f = va_arg(args, double);
	return (1);
}
