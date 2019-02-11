/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 19:23:42 by morgani           #+#    #+#             */
/*   Updated: 2019/02/11 17:40:45 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_fill_flag(t_conv *c, const char *format, int *i)
{
	int	k;

	k = *i;
	while (ft_check_flag(format[*i]))
	{
		c->flg = 1;
		// printf("\nFT_FILL_FLAG || FLAG CHAR format[%d] = %c\n", *i, format[*i]);
		if (format[*i] == '-')
			c->flg_tp.mns = 1;
		if (format[*i] == '+')
			c->flg_tp.pls = 1;
		if (format[*i] == '0')
			c->flg_tp.zr = 1;
		if (format[*i] == ' ' && !c->flg_tp.pls)
			c->flg_tp.spc = 1;
		// printf("\nspaceeeee = %d\n", c->flg_tp.spc);
		if (format[*i] == '#')
			c->flg_tp.hstg = 1;
		if (SN && SPC)
			SPC = 0;
		// printf("\n spc %d pls %d zr %d tp %c\n", c->flg_tp.spc, c->flg_tp.pls, c->flg_tp.zr, c->tp);
		(*i)++;
		// printf("\n2spaceeeee = %d\n", c->flg_tp.spc);
	}
	// printf("FT_FILL_FLAG || NOT FLAG CHAR format[%d] = %c\n", *i, format[*i]);
	return (k == *i ? 0 : 1);
}
