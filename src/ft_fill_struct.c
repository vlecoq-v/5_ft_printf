/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:16:48 by morgani           #+#    #+#             */
/*   Updated: 2019/02/18 16:21:14 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_init_struct(t_conv *c)
{
	c->flg = 0;
	c->flg_tp.mns = 0;
	c->flg_tp.pls = 0;
	c->flg_tp.zr = 0;
	c->flg_tp.spc = 0;
	c->flg_tp.hstg = 0;
	c->wdth = 0;
	c->prc = 0;
	c->prc_sz = 0;
	c->sz = 0;
	ft_bzero(c->sz_tp, 3);
	c->tp = 0;
	c->sn = 0;
	c->str_l = 0;
	c->str = NULL;
	c->len_flg = 0;
	c->arg_f = 0.0;
	c->arg_lf = 0.0;
}

int			ft_fill_struct(t_conv *c, const char *format, int *i, va_list args)
{
	int	j;

	j = 1;
	ft_init_struct(c);
	while (j > 0 && format[*i])
	{
		j = 0;
		j += ft_fill_flag(c, format, i);
		j += ft_fill_width(c, format, i, args);
		j += ft_fill_prec(c, format, i, args);
		j += ft_fill_size(c, format, i);
	}
	ft_fill_type(c, format, i);
	if (!ft_fill_arg(c, args))
		return (0);
	return (1);
}
