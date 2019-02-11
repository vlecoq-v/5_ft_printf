/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_prt_spc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:16:03 by morgani           #+#    #+#             */
/*   Updated: 2019/02/11 15:57:38 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_chck1(t_conv *c)
{
	return ((c->tp == 'c' || c->tp == 's') ? 1 : 0);
}

void		ft_fill_prt_spc(t_conv *c)
{
	c->prt_spc = 0;
	if ((c->wdth > c->str_l && c->prc_sz > c->str_l) || (c->wdth > c->str_l && !c->prc) || (!ft_chck1(c) && c->wdth > c->str_l))
		c->prt_spc = ft_chck1(c) ?  c->wdth - c->str_l : c->wdth - c->str_l - c->flg_tp.pls;
	else if (ft_chck1(c) && c->prc && c->wdth > c->prc_sz)
		c->prt_spc = c->wdth - c->prc_sz;
	else if (!ft_chck1(c) && c->prc && c->prc_sz > c->str_l)
		c->prt_spc = c->prc_sz - c->str_l;
	else if (c->wdth && c->prc && c->prc_sz == 0)
		c->prt_spc = c->wdth;
	c->prt_spc = c->prt_spc < 0 ? 0 : c->prt_spc;
	if (TP_PRCT && !c->wdth) // a cause de ca -> ft_printf("|%.8%|\n");
		c->prt_spc = 0;
	// printf("space %d\n", c->prt_spc);
}
