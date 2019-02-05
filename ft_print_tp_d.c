/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/02/05 17:18:14 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



static void	ft_prt_sc(t_conv *c)
{
	int	n;

	// ft_prt_strct(c);
	n = ((char)c->arg == 0 && (!c->prc || (c->prc && c->prc_sz == 0))) ? c->wdth + 1 : c->wdth;
	if (c->sn && c->flg_tp.pls && c->wdth)
		c->sn = 0;
	if (c->sn && !c->flg_tp.pls)
		c->sn = 1;
	// printf("n = %d\n", n);
	if (TP_O && !ft_strcmp(c->str, "0") && c->flg_tp.hstg)
		n--;
	if (ft_strcmp(c->str, "0") && (TP_P || TP_X || TP_MX) && (int)c->arg != 0)
		n -= 2;
	if ((TP_O || TP_X || TP_MX || TP_U) && ft_strcmp(c->str, "0") && c->flg_tp.pls)
		n++;
	// printf("wdth %d prc_sz %d pls %d strl %d sn %d\n", c->wdth, c->prc_sz, c->flg_tp.pls, c->str_l, c->sn);
	// printf("n2 = %d\n", n);
	while (n > c->prc_sz + c->flg_tp.pls + c->sn && n > c->str_l + c->flg_tp.pls + c->sn)
	{
		ft_add_to_buff(c, " ");
		n--;
	}
}

static void	ft_prt_zr(t_conv *c)
{
	int	n;

	if (c->flg_tp.zr && !c->flg_tp.mns)
	{
		n = (int)c->arg == 0 ? c->wdth + 1 : c->wdth;
		if ((TP_O || TP_X || TP_MX) && ft_strcmp(c->str, "0") && c->flg_tp.hstg)
			n -= 2;
		while (n > c->prc_sz + c->flg_tp.pls + c->sn && n > c->str_l + c->flg_tp.pls + c->sn)
		{
			ft_add_to_buff(c, "0");
			n--;
		}
	}
	else
	{
		n = c->prc_sz;
		if ((TP_O || TP_X || TP_MX) && ft_strcmp(c->str, "0") && c->flg_tp.hstg)
			n -= 2;
		while (n-- > c->str_l)
			ft_add_to_buff(c, "0");
	}
}

static void	ft_prt_buff(t_conv *c)
{
	if (!((long long)c->arg == 0) || (TP_O && c->flg_tp.hstg) || (c->flg_tp.hstg && (!c->prc || c->prc_sz != 0)))
		c->sn ? ft_putbuff(c, ++c->str) : ft_putbuff(c, c->str);
}

void	ft_print_tp_d(t_conv *c)
{
	if (c->flg_tp.mns)
	{
		ft_print_flg(c);
		ft_prt_zr(c); //si on a null il faut afficher 0 --> a faire
		// if (!c->prc || (c->prc && c->prc_sz != 0)) 
		// 	c->sn ? ft_putbuff(c, ++c->str) : ft_putbuff(c, c->str);
		ft_prt_buff(c);
		ft_prt_sc(c);
	}
	else
	{
		if (!c->flg_tp.zr)
			ft_prt_sc(c);
		ft_print_flg(c);
		ft_prt_zr(c);
		// if (!c->prc || (c->prc && c->prc_sz != 0)) 
		// 	c->sn ? ft_putbuff(c, ++c->str) : ft_putbuff(c, c->str);
		ft_prt_buff(c);	
	}
}
