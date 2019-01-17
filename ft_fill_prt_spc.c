/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_prt_spc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:16:03 by morgani           #+#    #+#             */
/*   Updated: 2019/01/17 16:54:03 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	chck_tp(t_conv *c)
{
	return ((c->tp == 'c' || c->tp == 's') ? 1 : 0);
}

void	ft_fill_prt_spc(t_conv *c)
{
	c->prt_spc = 0;
	if (c->prc && c->prc_sz == 0)
		c->prt_spc = c->wdth;
	else if (!c->prc || (c->prc && c->prc_sz > ft_strlen(c->str)))
		if (!chck_tp(c) && c->flg_tp.spc && !c->sn)
			c->prt_spc = 1;
		else if (!chck_tp(c) && c->prc_sz > ft_strlen(c->str) && !c->sn)
			c->prt_spc = c->prc_sz - ft_strlen(c->str);
		else if (c->prc_sz > ft_strlen(c->str) && c->sn)
			c->prt_spc = c->prc_sz - ft_strlen(c->str) + 1;
		else if (!chck_tp(c) && c->flg_tp.pls && c->wdth && !c->sn)
			c->prt_spc = c->wdth - ft_strlen(c->str) - 1;
		else if (c->wdth > ft_strlen(c->str))
			c->prt_spc = c->wdth - ft_strlen(c->str);
		else
			c->prt_spc = 0;
	else if (c->prc && c->prc_sz != 0 && c->wdth)
		c->prt_spc = c->wdth - c->prc_sz;
}
