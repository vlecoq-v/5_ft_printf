/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/01/22 10:02:55 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void		ft_print_tp_s(t_conv *c)
// {
// 	size_t x;

// 	x = 0;
// 	if ((!c->flg_tp.mns && !c->prc) || (c->tp == '%' && c->prc))
// 	{
// 		ft_prt_spc(c);
// 		ft_putbuff(c, c->str);
// 	}
// 	else if (c->flg_tp.mns || c->prc)
// 	{
		
// 		if (!c->prc || (c->prc && c->prc_sz > c->str_l))
// 			ft_putbuff(c, c->str);
// 		else
// 			while (c->prc_sz--)
// 				ft_add_to_buff(c, (((char*)c->str) + x++));
// 		ft_prt_spc(c);
// 	}
// 	else if (c->prc && c->prc_sz == 0)
// 		ft_prt_spc(c);
// }

void		ft_print_tp_s(t_conv *c)
{
	size_t x;

	x = 0;
	if (!c->flg_tp.mns)
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
			while (c->str[x] && c->prc_sz--)
				ft_add_to_buff(c, (((char*)c->str) + x++));
			ft_prt_spc(c);
		}
	}
}
