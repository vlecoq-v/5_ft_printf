/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:20:30 by morgani           #+#    #+#             */
/*   Updated: 2019/01/11 15:20:40 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_conv(const char *format, int *i, va_list args)
{
	t_conv	*c;

	c = (t_conv*)malloc(sizeof(t_conv));
	c->flg.mns = 0;
	c->flg.pls = 0;
	c->flg.zr = 0;
	c->flg.spc = 0;
	c->flg.hstg = 0;
	printf("print_conv i %d format[i]%c\n", *i, format[*i]);
	if (!ft_fill_struct(c, format, i, args))
	{
		printf("ERROR FCK_PRINT_CONV FILL_STRUCT\n");
		return (0);
	}
	write(1, "ok", 2);
	ft_putnbr(c->flg.pls);
	write(1, "\n", 1);
//	printf("\n2 c->flg.mns = %d\n c->flg.pls = %d \n c->flg.zr = %d\n c->flg.spc = %d \n c->flg.hstg = %d\n", c.flg.mns, c.flg.pls, c.flg.zr, c.flg.spc, c.flg.hstg);
	return (1);
}
