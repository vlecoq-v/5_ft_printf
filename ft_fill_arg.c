/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:46:02 by morgani           #+#    #+#             */
/*   Updated: 2019/02/13 19:15:27 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_fill_arg(t_conv *c, va_list args)
{
	if (c->tp != '%' && c->tp && c->tp != '!')
		c->arg = va_arg(args, void*);
	if (c->tp == 's')
	{
		// ft_prt_strct(c);
		if (c->prc && c->prc_sz == 0)
			return (1);
		if (!(c->str = ((int)c->arg == 0 ?
				ft_strdup("(null)") : ft_strdup((char*)c->arg))))
			return (0);
	}
	if (TP_C || TP_MC) 
	{
		if (ft_strncmp(c->sz_tp, "l", 2) == 0 && TP_C)
			c->tp = 'C';
		if (!LL_CARG)
		{
			c->wdth--;
			if (!(c->str = ft_strdup("")))
				return (0);
		}
		else
		{
			if ((c->str = ft_strdup(" ")))
				if (!STR || !(c->str[0] = TP_MC ?
							(wchar_t)c->arg : (char)c->arg))
					return (0);
		}
	}
	return (1);
}
