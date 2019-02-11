/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/02/11 14:49:32 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_prt_sc(t_conv *c)
{
	int	n;

	n = 0;
	n = (c->prc && c->prc_sz > c->str_l) ? c->wdth - c->prc_sz - c->sn - c->flg_tp.pls :
		c->wdth - c->str_l - c->sn - c->flg_tp.pls;
	n = (c->sn && c->flg_tp.pls) ? n + 1 : n;
	// printf("\n1N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, c->wdth, c->prc_sz, c->flg_tp.pls, c->str_l, c->sn);
	// n = (((char)c->arg == 0 && (c->tp != 'o' || (TP_O && !c->flg_tp.hstg))) && (!c->prc || (c->prc && c->prc_sz == 0))) ? c->wdth + 1 : c->wdth;
	// printf("n = %d\n", n);
	if (TP_D && c->flg_tp.spc && ft_strncmp(c->str, "-", 1))
		n--;
	if (TP_O && 
			((c->flg_tp.hstg && !ft_strcmp(c->str, "0") && !c->prc) ||
			(c->flg_tp.hstg && ft_strcmp(c->str, "0") && !c->prc) ||
			(c->flg_tp.hstg && !ft_strcmp(c->str, "0") && c->prc && !c->prc_sz) ||
			(c->flg_tp.hstg && ft_strcmp(c->str, "0") && c->prc && c->prc_sz <= c->str_l)))
		n--;
	// if (TP_D && c->flg_tp.spc && ft_strncmp(c->str, "-", 1))
	// 	n--;
	if (ft_strcmp(c->str, "0") && (TP_P || TP_X || TP_MX || c->tp == 'b') && c->flg_tp.hstg)
		n -= 2;
	if (((TP_X || TP_MX || TP_U) && ft_strcmp(c->str, "0") && c->flg_tp.pls))
			// || (TP_O && !ft_strcmp(c->str, "0") && !c->flg_tp.hstg))
			// || ((TP_D || TP_X) && !ft_strcmp(c->str, "0")))
		n++;
	// if (TP_D && c->flg_tp.spc)
	// 	n--;
	// printf("2N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, c->wdth, c->prc_sz, c->flg_tp.pls, c->str_l, c->sn);

	while (n-- > 0)
		ft_add_to_buff(c, " ");
}

static void	ft_prt_zr(t_conv *c)
{
	int	n;

	n = 0;
	// printf("\n01N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, c->wdth, c->prc_sz, c->flg_tp.pls, c->str_l, c->sn);
	// printf("\n01 mns %d ZR %d Wdth %d Str_l %d\n", c->flg_tp.mns, c->flg_tp.zr, c->wdth, c->str_l);
	if ((!c->flg_tp.mns && c->flg_tp.zr) || (c->prc_sz > c->str_l))
	{
		if (c->prc && c->prc_sz > c->str_l)
			n = c->prc_sz - c->str_l;
		else if (c->flg_tp.zr)
			n = c->wdth - c->str_l - c->sn;
	}
	// printf("n = %d\n", n);
	if (TP_O && c->flg_tp.hstg)
		n--;
	if ((TP_X || TP_MX) && c->flg_tp.hstg)
		n -= 2;
	if (TP_D && c->flg_tp.zr && c->flg_tp.pls && ft_strcmp(c->str, "0"))
		n--;
	// printf("02N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, c->wdth, c->prc_sz, c->flg_tp.pls, c->str_l, c->sn);
	while (n-- > 0)
		ft_add_to_buff(c, "0");
}

static void	ft_prt_buff(t_conv *c)
{
	if ((long long)c->arg != 0 
		|| (TP_D && (long long)c->arg != 0 && !c->flg_tp.hstg && (!c->prc || c->prc_sz != 0))
		|| (TP_D && (long long)c->arg == 0 && !c->prc)
		|| ((TP_X || TP_MX || TP_U) && (long long)c->arg == 0 && !c->prc)
		|| (TP_O && (long long)c->arg == 0 && !c->prc))
		ft_strncmp(c->str, "-", 1) == 0 ? ft_putbuff(c, c->str + 1) : ft_putbuff(c, c->str);
}
// || (TP_O && ((c->flg_tp.hstg || c->flg_tp.zr) && (long long)c->arg == 0)))
// || (TP_X && (long long)c->arg != 0 && c->prc && c->prc_sz != 0)

void	ft_print_tp_d(t_conv *c)
{
	// printf("in ft_print_tp_d\n");
	if (c->tp == 'f' && !(c->prc = 0))
		c->prc_sz = 0;
	if ((c->prc && c->prc_sz == 0 && c->prc_sz >= c->str_l) || (!ft_strcmp(c->str, "0") && c->prc))
		c->str_l = 0;
	if (c->flg_tp.mns)
	{
		ft_print_flg(c);
		ft_prt_zr(c); //si on a null il faut afficher 0 --> a faire
		ft_prt_buff(c);
		ft_prt_sc(c);
	}
	else
	{
		if (!c->flg_tp.zr || (c->prc && c->wdth > c->prc_sz))
			ft_prt_sc(c);
		ft_print_flg(c);
		ft_prt_zr(c);
		ft_prt_buff(c);
	}
}
