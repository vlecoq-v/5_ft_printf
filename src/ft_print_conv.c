/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:20:30 by morgani           #+#    #+#             */
/*   Updated: 2019/03/04 15:23:10 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_ajust(t_conv *c)
{
	if (((c->tp == 'o' || c->tp == 'u' || c->tp == 'x' || c->tp == 'X'
		|| c->tp == 'p') && c->flg_tp.pls)
		|| ((c->tp == 'd' || c->tp == 'f')
		&& c->sn && c->flg_tp.pls) || c->tp == '%')
		c->flg_tp.pls = 0;
	if (c->flg_tp.spc && (c->flg_tp.pls || ((c->flg_tp.zr && c->tp != 'd'
		&& c->tp != 'f') || c->tp == 'o')))
		c->flg_tp.spc = 0;
	if (c->tp == 'd' && c->sn)
		c->flg_tp.spc = 0;
}

int			ft_print_conv(const char *format, int *i, va_list args, t_conv *c)
{
	if (!ft_fill_struct(c, format, i, args) || !(ft_conv_to_str(c, args)))
	{
		ft_strdel(&c->str);
		ft_reset_buff(c);
		return (0);
	}
	ft_ajust(c);
	ft_fill_prt_spc(c);
	ft_print_str(c);
	ft_strdel(&c->str);
	return (1);
}
