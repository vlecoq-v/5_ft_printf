/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:16:48 by morgani           #+#    #+#             */
/*   Updated: 2019/02/11 19:01:16 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_init_struct(t_conv *c)
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
}

int	ft_fill_struct(t_conv *c, const char *format, int *i, va_list args)
{
	int	j;

	j = 1;
	// printf("type = %c\n", c->tp);
	ft_init_struct(c);
	while (j > 0 && format[*i])
	{
		j = 0;
		j += ft_fill_flag(c, format, i);
	// printf("\n====> FT_FILL_STRUCT || CHAR = %s FLAG ? %d // '-' %d // '+' %d // '0' %d // ' ' %d // '#' %d // ZR %d\n", format + *i, c->flg, c->flg_tp.mns, c->flg_tp.pls, c->flg_tp.zr, c->flg_tp.spc, c->flg_tp.hstg, c->flg_tp.zr);
		j += ft_fill_width(c, format, i, args);
	// printf("====> FT_FILL_STRUCT || CHAR = %s // WIDTH EGALE %d\n", format + *i, c->wdth);
		j += ft_fill_prec(c, format, i, args);
	// printf("====> FT_FILL_STRUCT || PREC ? %d SIZE %d\n", c->prc, c->prc_sz);
		j += ft_fill_size(c, format, i);
	// printf("====> FT_FILL_STRUCT || CHAR = %s //J = %d // SIZE ? %d SIZE %s\n", format + *i, j, c->sz, c->sz_tp);
		// (*i) += (j > 0 && !c->tp) ? 0 : 1;
	}
	ft_fill_type(c, format, i);
	// printf("====> FT_FILL_STRUCT || TYPE ? %c\n", c->tp);
	if (!ft_fill_arg(c, args))
		return (0);
	// printf("====> FT_FILL_STRUCT || ARG ? %d\n", c->nbr);
	return (1);
}