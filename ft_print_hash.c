/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hash.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:46:23 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/17 17:33:59 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hash(t_conv *c)
{
	if (c->flg_tp.pls && !c->sn && c->tp == 'd')
		ft_add_to_buff(c, "+");
	if (!c->flg_tp.hstg || !ft_strcmp(c->str, "0"))
		return ;
	if (c->tp == 'p' || c->tp == 'x')
		ft_putbuff(c, "0x");
	if (c->tp == 'X')
		ft_putbuff(c, "0X");
	if (c->tp == 'o')
		ft_putbuff(c, "0");
}
