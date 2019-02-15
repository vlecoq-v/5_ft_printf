/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:20:30 by morgani           #+#    #+#             */
/*   Updated: 2019/02/15 15:05:43 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_ajust(t_conv *c)
{
	if ((TP_O && c->flg_tp.pls) || (TP_D && c->sn && c->flg_tp.pls) || TP_PRCT)
		c->flg_tp.pls = 0;
	if (c->flg_tp.spc && (c->flg_tp.pls || (c->flg_tp.zr && c->tp != 'd')))
		c->flg_tp.spc = 0;
	if (TP_D && SN)
		SPC = 0;
	if (TP_O && HSTG && ZR && (!PRC || (PRC && PRC_SZ)))
		HSTG = 0;
}

int			ft_print_conv(const char *format, int *i, va_list args, t_conv *c)
{
	if (!ft_fill_struct(c, format, i, args))
	{
		ft_strdel(&c->str);
		return (0);
	}
	if (!ft_conv_to_str(c, args))
	{
		ft_strdel(&c->str);
		return (0);
	}
	ft_ajust(c);
	ft_fill_prt_spc(c);
	ft_print_str(c);
	ft_strdel(&c->str);
	return (1);
}
