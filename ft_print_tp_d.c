/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/01/23 14:34:18 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_d(t_conv *c, int i)
{
	if (i == 0)
		ft_print_flg(c);
	if (!c->flg_tp.mns)
		ft_prt_spc(c);
	if (i == 1)
		ft_print_flg(c);
	c->sn ? ft_putbuff(c, ++c->str) : ft_putbuff(c, c->str);
	if (c->flg_tp.mns)
		ft_prt_spc(c);
}

void	ft_print_tp_d(t_conv *c)
{
	if ((c->wdth > c->prc_sz) && c->prc_sz > c->str_l)
		while (c->wdth-- > c->prc_sz + c->sn)
			ft_add_to_buff(c, " ");
	if ((c->flg_tp.zr && c->wdth > c->str_l) || c->prc_sz > c->str_l)
		ft_print_d(c, 0);
	else
		ft_print_d(c, 1);
}
