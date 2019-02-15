/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/02/15 15:10:38 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_print_s_minus(t_conv *c)
{
	size_t x;

	x = 0;
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

static void	ft_print_s_nominus(t_conv *c)
{
	size_t x;

	x = 0;
	if (!c->prc)
	{
		ft_prt_spc(c);
		ft_putbuff(c, c->str);
	}
	else
	{
		ft_prt_spc(c);
		while (c->str[x] && c->prc_sz--)
			ft_add_to_buff(c, (((char*)c->str) + x++));
	}
}

void		ft_print_tp_s(t_conv *c)
{
	size_t x;

	x = 0;
	if (TP_PRCT && c->prc && (c->prc_sz == 0))
		c->prc_sz = 1;
	if (!c->flg_tp.mns || (c->tp == '!'))
		ft_print_s_nominus(c);
	else
		ft_print_s_minus(c);
}