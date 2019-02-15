/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:46:02 by morgani           #+#    #+#             */
/*   Updated: 2019/02/15 17:54:53 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_fill_arg(t_conv *c, va_list args)
{
	if (!ft_strncmp(c->sz_tp, "l", 2) && (TP_C || TP_S))
		return (0);
	if (c->tp != '%' && c->tp && c->tp != '!')
		c->arg = va_arg(args, void*);
	if (c->tp == 's')
		if (!(c->str = ((int)c->arg == 0 ?
				ft_strdup("(null)") : ft_strdup((char*)c->arg))))
			return (0);
	if (TP_C)
	{
		if (!LL_CARG)
		{
			c->wdth--;
			if (!(c->str = ft_strdup("")))
				return (0);
		}
		else
		{
			if ((c->str = ft_strdup(" ")))
				if (!STR || !(c->str[0] = (char)c->arg))
					return (0);
		}
	}
	return (1);
}
