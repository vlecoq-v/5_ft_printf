/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:46:23 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/06 14:23:37 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_flg(t_conv *c)
{
	if (c->flg_tp.spc && !c->sn && c->tp != 'o' && c->tp != 'x' && c->tp != 'X' && c->tp != 'u')
		ft_add_to_buff(c, " ");
	if ((c->flg_tp.zr && c->sn) || (c->prc && c->sn) || c->sn)
		ft_add_to_buff(c, "-");
	if (c->flg_tp.pls && !c->sn && (c->tp == 'f' || c->tp == 'd'))
		ft_add_to_buff(c, "+");
	if (!c->flg_tp.hstg || !ft_strcmp(c->str, "0"))
		return ;
	if ((c->tp == 'p' || c->tp == 'x') && ft_strcmp(c->str, "0"))
		ft_putbuff(c, "0x");
	if (c->tp == 'X' && ft_strcmp(c->str, "0"))
		ft_putbuff(c, "0X");
	if (c->tp == 'o' && ft_strcmp(c->str, "0"))
		ft_putbuff(c, "0");
	if (c->tp == 'b' && ft_strcmp(c->str, "0"))
		ft_putbuff(c, "0b");
}
