/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:56:41 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/11 10:11:33 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_init_struct(t_conv *c)
{
	c->flg = 0;
	c->flg_tp.mns = 0;
	c->flg_tp.pls = 0;
	c->flg_tp.zr = 0;
	c->flg_tp.spc = 0;
	c->flg_tp.hstg = 0;
	c->wdth = 0;
	c->prc = 0;
	c->prc_sz = 0;
	c->prt_spc = 0;
	c->sz = 0;
	c->cmpt = 0;
	c->ind = 0;
	ft_bzero(c->sz_tp, 3);
	c->tp = 0;
	c->sn = 0;
	c->str_l = 0;
	ft_bzero(c->buff, BUFF_SZ);
	c->str = NULL;
}

int			ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	t_conv		c;
	size_t		ret;

	i = 0;
	ft_init_struct(&c);
	if (BUFF_SZ <= 0)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		while (format[i] && format[i] != '%')
			ft_add_to_buff(&c, (char*)format + i++);
		if (format[i] == '%')
		{
			i++;
			ft_print_conv(format, &i, args, &c);
		}
	}
	va_end(args);
	write(1, c.buff, ft_strlen(c.buff));
	ret = c.cmpt + ft_strlen(c.buff);
	return (ret);
}
