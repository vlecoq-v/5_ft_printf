/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/01/17 13:58:17 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_tp_d(t_conv *c)
{
	if (c->flg_tp.spc || (!c->flg_tp.mns && !c->prc) || c->prc)
	{
		if ((c->flg_tp.zr && c->sn) || (c->prc && c->sn))
		{
			ft_add_to_buff(c, "-");
			ft_prt_spc(c);
			ft_putbuff(c, ++c->str);
		}
		else
		{
			ft_prt_spc(c);
			if (c->flg_tp.pls)
				ft_add_to_buff(c, "+");
			ft_putbuff(c, c->str);
		}
	}
	else if (c->flg_tp.mns || (c->prc && c->prc_sz == 0))
	{
		if (c->flg_tp.pls && !c->sn)
			ft_add_to_buff(c, "+");
		if (!c->prc || (c->prc && c->prc_sz > ft_strlen(c->str))
			|| (c->prc && c->prc_sz == 0))
			ft_putbuff(c, c->str);
		ft_prt_spc(c);
	}
}
