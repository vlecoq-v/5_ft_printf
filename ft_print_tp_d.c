/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/01/17 10:10:33 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_tp_d(t_conv *c)
{
	if (c->flg_tp.spc || (!c->flg_tp.mns && !c->prc) || c->prc)
	{
		if ((c->flg_tp.zr && c->nbr < 0) || (c->prc && c->nbr < 0))
		{
			ft_putchar('-');
			ft_prt_spc(c);
			ft_putstr(++c->str);
		}
		else
		{
			ft_prt_spc(c);
			if (c->flg_tp.pls)
				ft_putchar('+');
			ft_putstr(c->str);
		}
	}
	else if (c->flg_tp.mns || (c->prc && c->prc_sz == 0))
	{
		if (c->flg_tp.pls && c->nbr > 0)
			ft_putchar('+');
		if (!c->prc || (c->prc && c->prc_sz > ft_strlen(c->str))
			|| (c->prc && c->prc_sz == 0))
			ft_putstr(c->str);
		ft_prt_spc(c);
	}
}
