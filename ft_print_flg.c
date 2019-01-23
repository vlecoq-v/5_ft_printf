/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:46:23 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/23 16:58:26 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_flg(t_conv *c)
{
	if (c->flg_tp.spc && !c->sn)
		ft_add_to_buff(c, " ");
	if ((c->flg_tp.zr && c->sn) || (c->prc && c->sn) || c->sn)
		ft_add_to_buff(c, "-");
	if (c->flg_tp.pls && !c->sn && c->tp == 'd')
		ft_add_to_buff(c, "+");
	if (!c->flg_tp.hstg || !ft_strcmp(c->str, "0"))
		return ;
	if ((c->tp == 'p' || c->tp == 'x') && ft_strcmp(c->str, "0"))
		ft_putbuff(c, "0x");
	if (c->tp == 'X' && ft_strcmp(c->str, "0"))
		ft_putbuff(c, "0X");
	if (c->tp == 'o' && ft_strcmp(c->str, "0"))
		ft_putbuff(c, "0");
}
