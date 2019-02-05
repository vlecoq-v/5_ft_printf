/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:46:23 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/04 18:53:48 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_flg(t_conv *c)
{
	if (c->flg_tp.spc && !c->sn && (c->tp != 'o' && c->tp != 'x' && c->tp != 'X' && c->tp != 'u'))
		ft_add_to_buff(c, " ");
	if ((c->flg_tp.zr && c->sn) || (c->prc && c->sn) || c->sn)
		ft_add_to_buff(c, "-");
	if (c->flg_tp.pls && !c->sn && TP_D)
		ft_add_to_buff(c, "+");
	if (!c->flg_tp.hstg || !ft_strcmp(c->str, "0"))
		return ;
	if (TP_P || TP_X)
		ft_putbuff(c, "0x");
	if (TP_MX)
		ft_putbuff(c, "0X");
	if (TP_O)
		ft_putbuff(c, "0");
}
