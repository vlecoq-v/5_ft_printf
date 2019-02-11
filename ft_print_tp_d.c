/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/02/11 18:38:29 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_prt_sc(t_conv *c)
{
	int	n;

	n = 0;
	n = (PRC && PRC_SZ > STR_L) ? WDTH - PRC_SZ - SN - PLS - SPC :
		WDTH - STR_L - SN - PLS - SPC;
	n = (SN && PLS) ? n + 1 : n;
	// printf("\n1N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, WDTH, PRC_sz, PLS, STR_L, SN);
	// printf("n = %d\n", n);
	// if (TP_D && SPC && ft_strncmp(c->str, "-", 1))
	// 	n--;
	if (TP_O && 
			((HSTG && !LL_CARG && !PRC) ||
			(HSTG && LL_CARG && !PRC) ||
			(HSTG && !LL_CARG && PRC && !PRC_SZ) ||
			(HSTG && LL_CARG && PRC && PRC_SZ <= STR_L)))
		n--;
	if (LL_CARG && (TP_P || TP_X || TP_MX || TP_B) && HSTG)
		n -= 2;
	if (((TP_X || TP_MX || TP_U) && LL_CARG && PLS))
		n++;
	// printf("2N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, WDTH, PRC_sz, PLS, STR_L, SN);
	while (n-- > 0)
		ft_add_to_buff(c, " ");
}

static void	ft_prt_zr(t_conv *c)
{
	int	n;

	n = 0;
	// printf("\n01N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, WDTH, PRC_sz, PLS, STR_L, SN);
	// printf("\n01 mns %d ZR %d Wdth %d Str_l %d\n", MNS, ZR, WDTH, STR_L);
	if ((!MNS && ZR) || (PRC_SZ > STR_L))
	{
		if (PRC && PRC_SZ > STR_L)
			n = PRC_SZ - STR_L;
		else if (ZR)
			n = WDTH - STR_L - SN - SPC;
	}
	// printf("n = %d\n", n);
	if ((TP_O && HSTG) ||
		(TP_D && ZR && PLS && LL_CARG))
		n--;
	if ((TP_X || TP_MX) && HSTG)
		n -= 2;
	// if (TP_D && ZR && PLS && LL_CARG)
	// 	n--;
	// printf("02N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, WDTH, PRC_sz, PLS, STR_L, SN);
	while (n-- > 0)
		ft_add_to_buff(c, "0");
}

static void	ft_prt_buff(t_conv *c)
{
	if (LL_CARG != 0 
		|| (TP_D && LL_CARG != 0 && !HSTG && (!PRC || PRC_SZ != 0))
		|| (TP_D && LL_CARG == 0 && !PRC)
		|| ((TP_X || TP_MX || TP_U) && LL_CARG == 0 && !PRC)
		|| (TP_O && LL_CARG == 0 && (!PRC || (PRC && (HSTG || PRC_SZ > 0)))))
		SN ? ft_putbuff(c, c->str + 1) : ft_putbuff(c, c->str);
}

void	ft_print_tp_d(t_conv *c)
{
	// printf("in ft_print_tp_d\n");
	if (TP_F && !(PRC = 0))
		PRC_SZ = 0;
	if ((PRC && !PRC_SZ && PRC_SZ >= STR_L) || (!LL_CARG && PRC && (!PRC_SZ || TP_D)))
		STR_L = 0;
	if (MNS)
	{
		ft_print_flg(c);
		ft_prt_zr(c); //si on a null il faut afficher 0 --> a faire
		ft_prt_buff(c);
		ft_prt_sc(c);
	}
	else
	{
		if (!ZR || (PRC && WDTH > PRC_SZ))
			ft_prt_sc(c);
		ft_print_flg(c);
		ft_prt_zr(c);
		ft_prt_buff(c);
	}
}
