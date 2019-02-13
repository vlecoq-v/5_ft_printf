/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:46:23 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/13 15:22:26 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_flg(t_conv *c)
{
	if (c->flg_tp.spc && !c->sn && (c->tp != 'o' && c->tp != 'x'
		&& c->tp != 'X' && c->tp != 'u'))
		ft_add_to_buff(c, " ");
	if (c->sn)
		ft_add_to_buff(c, "-");
	if (c->flg_tp.pls && ft_strncmp(c->str, "-", 1) != 0 && TP_D)
		ft_add_to_buff(c, "+");
	if (TP_O && c->flg_tp.hstg && (long long)c->arg != 0 && (L_FLG = 1))
		ft_putbuff(c, "0");
	if (TP_P || (TP_X && HSTG && LL_CARG))
		ft_putbuff(c, "0x");
	if (!c->flg_tp.hstg || !ft_strcmp(c->str, "0"))
		return ;
	if (TP_MX)
		ft_putbuff(c, "0X");
	if (c->tp == 'b' && ft_strcmp(c->str, "0"))
		ft_putbuff(c, "0b");
}
