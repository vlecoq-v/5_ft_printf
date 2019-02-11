/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/02/11 11:39:09 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_print_tp_s(t_conv *c)
{
	size_t x;

	x = 0;
	// printf("FT_PRINT_TP_S PRC_SZ = %d\n", c->prc_sz);
	if (TP_PRCT && c->prc && c->prc_sz == 0)
		c->prc_sz = 1;
	if (!c->flg_tp.mns || (c->tp == '%' && c->prc) || (c->tp == '!'))
	{
		if (!c->prc)
		{
			ft_prt_spc(c);
			ft_putbuff(c, c->str);
		}
		else
		{
			// printf("space %d prc_sz %d\n", c->prt_spc, c->prc_sz);
			ft_prt_spc(c);
			while (c->str[x] && c->prc_sz--)
				ft_add_to_buff(c, (((char*)c->str) + x++));
		}
	}
	else
	{
		if (!c->prc)
		{
			ft_putbuff(c, c->str);
			ft_prt_spc(c);
		}
		else
		{
			// printf("space %d prc_sz %d\n", c->prt_spc, c->prc_sz);			
			while (c->str[x] && c->prc_sz--)
				ft_add_to_buff(c, (((char*)c->str) + x++));
			ft_prt_spc(c);
		}
	}
}
