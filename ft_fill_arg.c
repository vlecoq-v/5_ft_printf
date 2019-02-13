/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:46:02 by morgani           #+#    #+#             */
/*   Updated: 2019/02/13 15:36:17 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_fill_arg(t_conv *c, va_list args)
{
	if (c->tp != '%' && c->tp && c->tp != '!')
		c->arg = va_arg(args, void*);
	if (c->tp == 's')
	{
		// c->arg = va_arg(args, char *);
		// printf("in ft_fill_arg, %s\n", c->arg);
		if (!(c->str = ((int)c->arg == 0 ?
				ft_strdup("(null)") : ft_strdup((char*)c->arg))))
			return (0);
		// return (0);
		// printf("in ft_fill_arg, s\n");
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
	// else if (c->tp == 'f')
	// 	c->arg_f = va_arg(args, double);
	return (1);
}
