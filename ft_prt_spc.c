/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_spc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:21:59 by morgani           #+#    #+#             */
/*   Updated: 2019/02/13 14:30:14 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_chck_tp(t_conv *c)
{
	return ((TP_D || TP_O || TP_U || TP_X || TP_MX || TP_PRCT) ? 1 : 0);
}

void		ft_prt_spc(t_conv *c)
{
	// printf("prt+spc = %d\n", c->prt_spc);
	while (c->prt_spc--)
		((!MNS && !PRC && ZR) ||
		(ft_chck_tp(c) && !MNS && PRC_SZ > STR_L)) ?
			ft_add_to_buff(c, "0") : ft_add_to_buff(c, " ");
}
