/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/02/06 18:18:03 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_prt_sc(t_conv *c)
{
	int	n;

	n = 0;
	n = c->prc ? c->wdth - c->prc_sz - c->sn - c->flg_tp.pls :
		c->wdth - c->str_l - c->sn - c->flg_tp.pls;
	n = (c->sn && c->flg_tp.pls) ? n + 1 : n;
	// printf("N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, c->wdth, c->prc_sz, c->flg_tp.pls, c->str_l, c->sn);
	// n = (((char)c->arg == 0 && (c->tp != 'o' || (TP_O && !c->flg_tp.hstg))) && (!c->prc || (c->prc && c->prc_sz == 0))) ? c->wdth + 1 : c->wdth;
	// printf("n = %d\n", n);
	if (TP_O && ft_strcmp(c->str, "0") && c->flg_tp.hstg)
		n--;
	if (ft_strcmp(c->str, "0") && (TP_P || TP_X || TP_MX) && c->flg_tp.hstg)
		n -= 2;
	if ((TP_O || TP_X || TP_MX || TP_U) && ft_strcmp(c->str, "0") && c->flg_tp.pls)
		n++;
	// if (TP_D && c->flg_tp.spc)
	// 	n--;
	// printf("N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, c->wdth, c->prc_sz, c->flg_tp.pls, c->str_l, c->sn);

	while (n-- > 0)
		ft_add_to_buff(c, " ");
}

/*
static void	ft_prt_zr(t_conv *c)
{
	int	n;

	if (c->flg_tp.zr && !c->flg_tp.mns && c->wdth > c->prc_sz)
	{
		// n =  c->wdth + 1;
		n = (((long long)c->arg == 0 && TP_O) || (TP_D && (long long)c->arg != 0 && c->sn)) ? c->wdth + 1 : c->wdth;
		if ((TP_O || TP_X || TP_MX) && ft_strcmp(c->str, "0") && c->flg_tp.hstg)
			n -= 2;
		// printf("N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, c->wdth, c->prc_sz, c->flg_tp.pls, c->str_l, c->sn);
		while (n > c->prc_sz + c->flg_tp.pls + c->sn + c->str_l && n > c->prc_sz + c->str_l + c->flg_tp.pls + c->sn)
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
}*/

static void	ft_prt_zr(t_conv *c)
{
	int	n;

	n = 0;
	// if (c->flg_tp.zr)
	// {
		if (c->prc && c->prc_sz > c->str_l)
			n = c->prc_sz - c->str_l;
		else if (c->flg_tp.zr)
			n = c->wdth - c->str_l - c->sn;
	// }
	while (n-- > 0)
		ft_add_to_buff(c, "0");
}

static void	ft_prt_buff(t_conv *c)
{
	if ((long long)c->arg != 0 || (TP_D && (long long)c->arg == 0 && !c->flg_tp.hstg && c->prc_sz != 0)
		|| (TP_X && c->prc && c->prc_sz != 0)
		|| (TP_O && (c->flg_tp.hstg || (long long)c->arg == 0)))
		ft_strncmp(c->str, "-", 1) == 0 ? ft_putbuff(c, ++c->str) : ft_putbuff(c, c->str);
}

void	ft_print_tp_d(t_conv *c)
{
	if (c->flg_tp.mns)
	{
		ft_print_flg(c);
		ft_prt_zr(c); //si on a null il faut afficher 0 --> a faire
		// c->sn = 0;
		ft_prt_buff(c);
		ft_prt_sc(c);
	}
	else
	{
		if (!c->flg_tp.zr || (c->prc && c->wdth > c->prc_sz))
			ft_prt_sc(c);
		ft_print_flg(c);
		// c->sn = 0;
		ft_prt_zr(c);
		ft_prt_buff(c);
	}
}
