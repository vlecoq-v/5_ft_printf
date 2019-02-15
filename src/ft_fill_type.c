/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 13:05:19 by morgani           #+#    #+#             */
/*   Updated: 2019/02/15 16:37:19 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_chg_tp(t_conv *c)
{
	if (c->tp == 'D')
	{
		c->tp = 'd';
		ft_strcpy(c->sz_tp, "l");
	}
	else if (c->tp == 'U')
	{
		c->tp = 'u';
		ft_strcpy(c->sz_tp, "l");
	}
	else if (c->tp == 'O')
	{
		c->tp = 'o';
		ft_strcpy(c->sz_tp, "l");
	}
	else if (c->tp == 'F')
	{
		c->tp = 'f';
		ft_strcpy(c->sz_tp, "l");
	}
	else if (c->tp == 'i')
		c->tp = 'd';
}

void		ft_chg_tp_uni(t_conv *c)
{
	if (c->tp == 'C')
	{
		c->tp = 'c';
		ft_strcpy(c->sz_tp, "l");
	}
	if (c->tp == 'S')
	{
		c->tp = 's';
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
	if (c->tp == 'D' || c->tp == 'U' || c->tp == 'O' || c->tp == 'i'
		|| c->tp == 'F')
		ft_chg_tp(c);
	if (c->tp == 'C' || c->tp == 'S')
		ft_chg_tp_uni(c);
	return (1);
}
