/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 19:23:42 by morgani           #+#    #+#             */
/*   Updated: 2019/02/15 15:01:27 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int			ft_fill_flag(t_conv *c, const char *format, int *i)
{
	int	k;

	k = *i;
	while (ft_check_flag(format[*i]))
	{
		c->flg = 1;
		if (format[*i] == '-')
			c->flg_tp.mns = 1;
		else if (format[*i] == '+')
			c->flg_tp.pls = 1;
		else if (format[*i] == '0')
			c->flg_tp.zr = 1;
		else if (format[*i] == ' ' && !c->flg_tp.pls)
			c->flg_tp.spc = 1;
		else if (format[*i] == '#')
			c->flg_tp.hstg = 1;
		else if (SN && SPC)
			SPC = 0;
		(*i)++;
	}
	return (k == *i ? 0 : 1);
}