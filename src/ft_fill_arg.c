/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:46:02 by morgani           #+#    #+#             */
/*   Updated: 2019/02/19 15:00:22 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_fill_arg_c(t_conv *c)
{
	if (!(long long)c->arg)
	{
		c->wdth--;
		if (!(c->str = ft_strdup("")))
			return (0);
	}
	else
	{
		if ((c->str = ft_strdup(" ")))
			if (!c->str || !(c->str[0] = (char)c->arg))
				return (0);
	}
	return (1);
}

int			ft_fill_arg(t_conv *c, va_list args)
{
	if (!ft_strncmp(c->sz_tp, "l", 2) && (c->tp == 'c' || c->tp == 's'))
		return (0);
	if (c->tp != '%' && c->tp && c->tp != '!')
		c->arg = va_arg(args, void*);
	if (c->tp == 's')
	{
		if (c->prc && !c->prc_sz)
		{
			if (!(c->str = ft_strdup("")))
				return (0);
		}
		else
		{
			if (!(c->str = ((int)c->arg == 0
				? ft_strdup("(null)") : ft_strdup((char*)c->arg))))
				return (0);
		}
	}
	if (c->tp == 'c')
		if (!ft_fill_arg_c(c))
			return (0);
	return (1);
}
