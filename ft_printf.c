/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:56:41 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/18 15:54:01 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_reset_buff(t_conv *c)
{
	c->ind = 0;
	c->cmpt += BUFF_SZ;
	write(1, c->buff, ft_strlen(c->buff));
	ft_bzero(c->buff, BUFF_SZ);
}

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
			ft_strncpy(c->buff + c->ind++, format + i++, 1);
		if (c->ind == BUFF_SZ)
			ft_reset_buff(c);
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
