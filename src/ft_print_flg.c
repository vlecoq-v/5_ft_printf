/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:46:23 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/28 14:48:56 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_flg(t_conv *c)
{
	if (c->flg_tp.spc && !c->sn && (c->tp != 'o' && c->tp != 'x' && c->tp != 'u'
		&& c->tp != 'X'))
		ft_add_to_buff(c, " ");
	if (c->sn)
		ft_add_to_buff(c, "-");
	if (c->flg_tp.pls && ft_strncmp(c->str, "-", 1) != 0 &&
		(c->tp == 'd' || c->tp == 'f'))
		ft_add_to_buff(c, "+");
	if (c->tp == 'o' && c->flg_tp.hstg
		&& (long long)c->arg != 0 && (c->len_flg = 1))
		ft_putbuff(c, "0");
	if ((c->tp == 'p' || (c->tp == 'x' && c->flg_tp.hstg
		&& (long long)c->arg)) && (c->len_flg = 2))
		ft_putbuff(c, "0x");
	if (!c->flg_tp.hstg || !ft_strcmp(c->str, "0"))
		return ;
	if (c->tp == 'X')
		ft_putbuff(c, "0X");
	if (c->tp == 'b' && ft_strcmp(c->str, "0"))
		ft_putbuff(c, "0b");
}
