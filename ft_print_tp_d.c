/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/02/13 18:58:48 by vlecoq-v         ###   ########.fr       */
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
	if (TP_O && (
			// ((HSTG && !LL_CARG && !PRC) ||
			(HSTG && LL_CARG && !PRC) ||
			(HSTG && !LL_CARG && PRC && !PRC_SZ) ||
			(HSTG && LL_CARG && PRC && PRC_SZ <= STR_L)))
		n--;
	if ((LL_CARG && (TP_X || TP_MX || TP_B) && HSTG) || (TP_P))
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
	// printf("\n01N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, WDTH, PRC_SZ, PLS, STR_L, SN);
	// printf("\n01 mns %d ZR %d Wdth %d Str_l %d\n", MNS, ZR, WDTH, STR_L);
	if ((!MNS && ZR) || (PRC_SZ > STR_L))
	{
		if (PRC && PRC_SZ > STR_L)
			n = PRC_SZ - STR_L - L_FLG;
		else if (ZR && (!PRC || (PRC && PRC_SZ > STR_L)))
			n = WDTH - STR_L - SN - SPC - L_FLG;
	}
	// printf("n = %d\n", n);
	if (
		(TP_O && HSTG && ZR) ||
		(TP_D && ZR && PLS && LL_CARG))
		n--;
	if ((TP_X || TP_MX) && HSTG && LL_CARG && ZR && (!PRC || (PRC && PRC_SZ < STR_L)))
		n -= 2;
	// if (TP_D && ZR && PLS && LL_CARG)
	// 	n--;
	// printf("02N = %d wdth %d prc_sz %d pls %d strl %d sn %d\n", n, WDTH, PRC_SZ, PLS, STR_L, SN);
	while (n-- > 0)
		ft_add_to_buff(c, "0");
}

static void	ft_prt_buff(t_conv *c)
{
	// ft_prt_strct(c);
	if (LL_CARG != 0 
		|| (TP_D && LL_CARG != 0 && !HSTG && (!PRC || PRC_SZ != 0))
		|| (TP_D && LL_CARG == 0 && !PRC)
		|| ((TP_X || TP_MX || TP_U) && !LL_CARG && (!PRC || PRC_SZ))
		|| (TP_O && LL_CARG == 0 && (!PRC || (PRC && (HSTG || PRC_SZ > 0))))
		|| (TP_U && !LL_CARG && !HSTG && (!PRC || PRC_SZ != 0))
		|| (TP_P && !LL_CARG)
		|| (TP_B && !LL_CARG && !HSTG && (!PRC || PRC_SZ != 0)))
		SN ? ft_putbuff(c, c->str + 1) : ft_putbuff(c, c->str);
}

void	ft_print_tp_d(t_conv *c)
{
	// printf("in ft_print_tp_d\n");
	if (TP_F && !(PRC = 0))
		PRC_SZ = 0;
	if ((PRC && !PRC_SZ && PRC_SZ >= STR_L) || (!LL_CARG && PRC && (!PRC_SZ || TP_D)))
		STR_L = 0;
	// printf("strl %d\n", STR_L);
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
