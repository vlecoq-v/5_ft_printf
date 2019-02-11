/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:46:23 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/11 10:40:23 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_flg(t_conv *c)
{
	if (c->flg_tp.spc && !c->sn && (c->tp != 'o' && c->tp != 'x' && c->tp != 'X' && c->tp != 'u'))
		ft_add_to_buff(c, " ");
	// printf("SNTC %d\n", c->sn);
	if (c->sn)
		ft_add_to_buff(c, "-");
	// printf("pls %d strl %d sn %d\n", c->flg_tp.pls, c->str_l, c->sn);
	if (c->flg_tp.pls && ft_strncmp(c->str, "-", 1) != 0 && TP_D)
		ft_add_to_buff(c, "+");
	// if (!c->flg_tp.hstg || !ft_strcmp(c->str, "0"))
	// 	return ;
	if (TP_O && c->flg_tp.hstg)
		ft_putbuff(c, "0");
	if (!c->flg_tp.hstg || !ft_strcmp(c->str, "0"))
		return ;
	if (TP_P || TP_X)
		ft_putbuff(c, "0x");
	if (TP_MX)
		ft_putbuff(c, "0X");
	if (c->tp == 'b' && ft_strcmp(c->str, "0"))
		ft_putbuff(c, "0b");
	// if (TP_O)
	// 	ft_putbuff(c, "0");
}
