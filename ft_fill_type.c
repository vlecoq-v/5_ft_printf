/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 13:05:19 by morgani           #+#    #+#             */
/*   Updated: 2019/02/11 13:55:24 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_chg_tp(t_conv *c)
{
	if (c->tp == 'D')
	{
		c->tp = 'd';
		ft_strcpy(c->sz_tp, "l");
	}
	if (c->tp == 'U')
	{
		c->tp = 'u';
		ft_strcpy(c->sz_tp, "l");
	}
	if (c->tp == 'O')
	{
		c->tp = 'o';
		ft_strcpy(c->sz_tp, "l");
	}
}

int			ft_fill_type(t_conv *c, const char *format, int *i)
{
	if (ft_check_type(format[*i]))
		c->tp = format[(*i)++];
	else if (c->wdth)
	{
		c->str = NULL;
		c->tp = '!';
	}
	else
		return (0);
	if (c->tp == 'D' || c->tp == 'U' || c->tp == 'O')
		ft_chg_tp(c);
	if (c->tp == 'i')
		c->tp = 'd';
	return (1);
}
