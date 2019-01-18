/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_spc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:21:59 by morgani           #+#    #+#             */
/*   Updated: 2019/01/18 15:41:19 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_chck_tp(t_conv *c)
{
	return ((c->tp == 'd' || c->tp == 'o' || c->tp == 'u'
		|| c->tp == 'x' || c->tp == 'X') ? 1 : 0);
}

void		ft_prt_spc(t_conv *c)
{
	while (c->prt_spc--)
		((!c->flg_tp.mns && c->flg_tp.zr) ||
		(ft_chck_tp(c) && c->prc_sz > ft_strlen(c->str))) ?
			ft_add_to_buff(c, "0") : ft_add_to_buff(c, " ");
}
