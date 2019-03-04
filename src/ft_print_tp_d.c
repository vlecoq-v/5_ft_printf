/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/03/04 15:24:36 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_prt_sc(t_conv *c)
{
	int	n;

	n = 0;
	n = (c->prc && c->prc_sz > c->str_l)
		? c->wdth - c->prc_sz - c->sn - c->flg_tp.pls - c->flg_tp.spc
		: c->wdth - c->str_l - c->sn - c->flg_tp.pls - c->flg_tp.spc;
	n = (c->sn && c->flg_tp.pls) ? n + 1 : n;
	if (c->tp == 'o' && ((c->flg_tp.hstg && (long long)c->arg
		&& (!c->prc || (c->prc && c->prc_sz <= c->str_l)))
		|| (c->flg_tp.hstg && !(long long)c->arg && c->prc && !c->prc_sz)))
		n--;
	if (((long long)c->arg && (c->tp == 'x' || c->tp == 'X' || c->tp == 'b')
		&& c->flg_tp.hstg) || (c->tp == 'p'))
		n -= 2;
	if (((c->tp == 'x' || c->tp == 'X' || c->tp == 'u')
		&& (long long)c->arg && c->flg_tp.pls))
		n++;
	while (n-- > 0)
		ft_add_to_buff(c, " ");
}

static void	ft_prt_zr(t_conv *c)
{
	int	n;

	n = 0;
	if ((!c->flg_tp.mns && c->flg_tp.zr) || (c->prc_sz > c->str_l))
	{
		if (c->tp == 'x' && c->flg_tp.hstg && c->prc && c->prc_sz > c->str_l)
			c->len_flg = 0;
		if (c->prc && c->prc_sz > c->str_l)
			n = c->prc_sz - c->str_l - c->len_flg;
		else if (c->flg_tp.zr && (!c->prc || (c->prc && c->prc_sz > c->str_l)))
			n = c->wdth - c->str_l - c->sn
			- c->flg_tp.spc - c->len_flg - c->flg_tp.pls;
	}
	if (c->tp == 'X' && c->wdth > c->str_l && !c->prc && c->flg_tp.zr
		&& c->flg_tp.hstg && ft_strcmp(c->str, "0"))
		n -= 2;
	while (n-- > 0)
		ft_add_to_buff(c, "0");
}

static void	ft_prt_buff(t_conv *c)
{
	if ((long long)c->arg != 0
		|| (c->tp == 'd' && (long long)c->arg != 0
			&& !c->flg_tp.hstg && (!c->prc || c->prc_sz != 0))
		|| (c->tp == 'd' && (long long)c->arg == 0 && (!c->prc || c->prc_sz))
		|| ((c->tp == 'x' || c->tp == 'X' || c->tp == 'u')
			&& !(long long)c->arg && (!c->prc || c->prc_sz))
		|| (c->tp == 'o' && (long long)c->arg == 0
			&& (!c->prc || (c->prc && (c->flg_tp.hstg || c->prc_sz > 0))))
		|| (c->tp == 'u' && !(long long)c->arg
			&& !c->flg_tp.hstg && (!c->prc || c->prc_sz != 0))
		|| (c->tp == 'p' && !(long long)c->arg)
		|| (c->tp == 'b' && !(long long)c->arg
			&& !c->flg_tp.hstg && (!c->prc || c->prc_sz != 0))
		|| c->tp == 'f')
		c->sn ? ft_putbuff(c, c->str + 1) : ft_putbuff(c, c->str);
}

void		ft_print_tp_d(t_conv *c)
{
	if (c->tp == 'f' && !(c->prc = 0))
		c->prc_sz = 0;
	if ((c->prc && !c->prc_sz && c->prc_sz >= c->str_l)
		|| (!(long long)c->arg && c->prc && !c->prc_sz))
		c->str_l = 0;
	if (c->flg_tp.mns)
	{
		ft_print_flg(c);
		ft_prt_zr(c);
		ft_prt_buff(c);
		ft_prt_sc(c);
	}
	else
	{
		// printf("c->str = %s\n", c->str);
		if (!c->flg_tp.zr || (c->prc && c->wdth > c->prc_sz))
			ft_prt_sc(c);
		ft_print_flg(c);
		ft_prt_zr(c);
		// printf("c->str = %s\n", c->str);

		ft_prt_buff(c);
	}
}
