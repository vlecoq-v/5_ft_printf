/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_prt_spc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:16:03 by morgani           #+#    #+#             */
/*   Updated: 2019/01/18 15:51:25 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_chck_tp_1(t_conv *c)
{
	return ((c->tp == 'c' || c->tp == 's' || c->tp == 'o' || c->tp == 'u'
		|| c->tp == 'x' || c->tp == 'X' || c->tp == 'p') ? 1 : 0);
}

static int	ft_chck_tp_2(t_conv *c)
{
	return ((c->tp == 'c' || c->tp == 's') ? 1 : 0);
}

void		ft_fill_prt_spc(t_conv *c)
{
	c->prt_spc = 0;
	if (c->prc && c->prc_sz == 0)
		c->prt_spc = c->wdth;
	else if (!c->prc || (c->prc && c->prc_sz > c->str_l))
		if (!ft_chck_tp_1(c) && c->flg_tp.spc && !c->sn && c->wdth <= c->str_l)
			c->prt_spc = 1;
		else if (!ft_chck_tp_2(c) && c->prc_sz > c->str_l && !c->sn)
			c->prt_spc = c->prc_sz - c->str_l;
		else if (c->prc_sz > c->str_l && c->sn)
			c->prt_spc = c->prc_sz - c->str_l + 1;
		else if (!ft_chck_tp_1(c) && c->flg_tp.pls && c->wdth && !c->sn)
			c->prt_spc = c->wdth - c->str_l - 1;
		else if (c->wdth > c->str_l)
			c->prt_spc = c->wdth - c->str_l;
		else
			c->prt_spc = 0;
	else if (c->prc && c->prc_sz != 0 && c->wdth > c->str_l)
		if (c->wdth > c->prc_sz && c->wdth > c->str_l)
			c->prt_spc = c->wdth - c->str_l;
		else
			c->prt_spc = c->wdth - c->prc_sz;
	// printf("space = %d\n", c->prt_spc);
}
