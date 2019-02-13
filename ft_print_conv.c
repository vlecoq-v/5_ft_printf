/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:20:30 by morgani           #+#    #+#             */
/*   Updated: 2019/02/13 14:11:02 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_ajust(t_conv *c)
{
	if ((TP_O && c->flg_tp.pls) || (TP_D && c->sn && c->flg_tp.pls) || TP_PRCT) // PAS de signe avec les O (test > "10octal 1 |%+12o| octal 2 |%+12o|", 42, 6, -42, 6)<)
		c->flg_tp.pls = 0;
	// printf("\nprint conv spc %d\n", c->flg_tp.spc);
	if (c->flg_tp.spc && (c->flg_tp.pls || (c->flg_tp.zr && c->tp != 'd')))
		c->flg_tp.spc = 0;
	// printf("\nprint conv spc %d\n", c->flg_tp.spc);
	if (TP_D && SN)
		SPC = 0;
}

int			ft_print_conv(const char *format, int *i, va_list args, t_conv *c)
{
	// printf("FT_PRINT_CONV || format[%d] (%c)\n", *i, format[*i]);
	if (!ft_fill_struct(c, format, i, args))
	{
		// printf("FT_PRINT_CONV || ERROR FCK_PRINT_CONV FILL_STRUCT\n");
		ft_strdel(&c->str);
		return (0);
	}
	// ft_prt_strct(c);
	// printf("PRINT CONV ====> FT_FILL_STRUCT || ARG ? %d\n", (int)c->arg);
	if (!ft_conv_to_str(c, args))
	{
		// write(2, "error in string creation\n", 25);
		ft_strdel(&c->str);
		return (0);
	}
	// ft_prt_strct(c);
	ft_ajust(c);
	// printf("PRINT CONV ====> FT_CONV_TO_STR || ARG ? %s\n", c->str);
	ft_fill_prt_spc(c);
	// printf("PRINT CONV ====> FT_FILL_PRT_SPC || ARG ? %s\n", c->str);
	ft_print_str(c);
	ft_strdel(&c->str);
	return (1);
}
