/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/01/18 16:04:51 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_print_tp_s(t_conv *c)
{
	size_t x;

	x = 0;

	if (!c->flg_tp.mns && !c->prc)
	{
		ft_prt_spc(c);
		ft_putbuff(c, c->str);
	}
	else if (c->flg_tp.mns || c->prc)
	{
		if (!c->prc || (c->prc && c->prc_sz > c->str_l))
			ft_putbuff(c, c->str);
		else
			while (c->prc_sz--)
				ft_add_to_buff(c, (((char*)c->str) + x++));
		ft_prt_spc(c);
	}
	else if (c->prc && c->prc_sz == 0)
		ft_prt_spc(c);
}
