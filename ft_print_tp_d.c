/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/02/11 10:24:12 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_prt_sc(t_conv *c)
{
	int	n;

	// ft_prt_strct(c);
	// n = (char)c->arg == 0 ? c->wdth + 1 : c->wdth;
	n = c->wdth;
	if (c->sn && c->flg_tp.pls && c->wdth)
		c->sn = 0;
	if (c->sn && !c->flg_tp.pls)
		c->sn = 1;
	if (c->tp == 'o' && ft_strcmp(c->str, "0") && c->flg_tp.hstg)
		n--;
	if ((c->tp == 'p' || c->tp == 'x' || c->tp == 'X' || c->tp == 'b') && ft_strcmp(c->str, "0") && c->flg_tp.hstg)
		n -= 2;
	// printf("n = %d str = |%s|\n", n, c->str);	
	if ((c->tp == 'o' || c->tp == 'x'|| c->tp == 'X' || c->tp == 'u') && ft_strcmp(c->str, "0") && c->flg_tp.pls)
		n++;
	// printf("wdth %d prc_sz %d pls %d strl %d sn %d\n", c->wdth, c->prc_sz, c->flg_tp.pls, c->str_l, c->sn);
	// printf("n = %d\n", n);
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
		if ((c->tp == 'o' || c->tp == 'x'|| c->tp == 'X' || c->tp == 'b') && ft_strcmp(c->str, "0") && c->flg_tp.hstg)
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
		if ((c->tp == 'o' || c->tp == 'x'|| c->tp == 'X' || c->tp == 'b') && ft_strcmp(c->str, "0") && c->flg_tp.hstg)
			n -= 2;
		while (n-- > c->str_l)
			ft_add_to_buff(c, "0");
	}
}

void	ft_print_tp_d(t_conv *c)
{
	// printf("in ft_print_tp_d\n");
	if (c->tp == 'f' && !(c->prc = 0))
		c->prc_sz = 0;
	if (c->flg_tp.mns)
	{
		ft_print_flg(c);
		ft_prt_zr(c); //si on a null il faut afficher 0 --> a faire
		c->sn ? ft_putbuff(c, c->str + 1) : ft_putbuff(c, c->str);
		ft_prt_sc(c);
	}
	else
	{
		if (!c->flg_tp.zr)
			ft_prt_sc(c);
		ft_print_flg(c);
		ft_prt_zr(c);
		c->sn ? ft_putbuff(c, c->str + 1) : ft_putbuff(c, c->str);
	}
}
