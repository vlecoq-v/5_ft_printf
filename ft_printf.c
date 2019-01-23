/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:56:41 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/23 17:20:27 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	t_conv		*c;

	i = 0;
	c = (t_conv*)malloc(sizeof(t_conv));
	c->cmpt = 0;
	c->ind = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		while (format[i] && format[i] != '%' && c->ind < BUFF_SZ)
			ft_add_to_buff(c, (char*)format + i++);
		if (format[i] == '%')
		{
			i++;
			ft_print_conv(format, &i, args, c);
		}
	}
	va_end(args);
	write(1, c->buff, ft_strlen(c->buff));
	return (c->cmpt + ft_strlen(c->buff));
}
