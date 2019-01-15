/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:16:48 by morgani           #+#    #+#             */
/*   Updated: 2019/01/15 15:55:20 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fill_struct(t_conv *c, const char *format, int *i, va_list args)
{
	ft_fill_flag(c, format, i);
	printf("====> FT_FILL_STRUCT || FLAG ? %d // '-' %d // '+' %d // '0' %d // ' ' %d // '#' %d\n", c->flg, c->flg_tp.mns, c->flg_tp.pls, c->flg_tp.zr, c->flg_tp.spc, c->flg_tp.hstg);
	ft_fill_width(c, format, i, args);
	printf("====> FT_FILL_STRUCT || WIDTH EGALE %d\n", c->wdth);
	ft_fill_prec(c, format, i, args);
	printf("====> FT_FILL_STRUCT || PREC ? %d SIZE %d\n", c->prc, c->prc_sz);
	ft_fill_size(c, format, i);
	printf("====> FT_FILL_STRUCT || SIZE ? %d SIZE %s\n", c->sz, c->sz_tp);
	ft_fill_type(c, format, i);
	printf("====> FT_FILL_STRUCT || TYPE ? %c\n", c->tp);
	ft_fill_arg(c, args);
	printf("====> FT_FILL_STRUCT || ARG ? %d\n", c->arg);
	return (1);
}
