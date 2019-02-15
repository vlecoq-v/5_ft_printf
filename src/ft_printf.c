/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:56:41 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/15 14:47:42 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_init_struct(t_conv *c)
{
	c->cmpt = 0;
	c->ind = 0;
	ft_bzero(c->buff, BUFF_SZ);
}

int			ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	t_conv		c;

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
			if (ft_print_conv(format, &i, args, &c) == 0)
				return (-1);
		}
	}
	va_end(args);
	write(1, c.buff, c.ind);
	return (c.cmpt + c.ind);
}
