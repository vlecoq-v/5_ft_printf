/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 19:23:42 by morgani           #+#    #+#             */
/*   Updated: 2019/01/11 15:24:08 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_fill_flag(t_conv *c, const char *format, int *i)
{
	if (ft_check_flag(format[*i]))
	{
		printf("1 format[%d] = %c\n", *i, format[*i]);
		if (format[*i] == '-')
			c->flg.mns = 1;
		if (format[*i] == '+')
			c->flg.pls = 1;
		if (format[*i] == '0')
			c->flg.zr = 1;
		if (format[*i] == ' ' && !c->flg.pls)
			c->flg.spc = 1;
		if (format[*i] == '#')
			c->flg.hstg = 1;
		return (1);
	}
	printf("0 format[%d] = %c\n", *i, format[*i]);
	return (0);
}
