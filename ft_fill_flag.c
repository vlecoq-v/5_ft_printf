/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 19:23:42 by morgani           #+#    #+#             */
/*   Updated: 2019/01/10 11:12:03 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_fill_flag(va_list *c, char *format, int i)
{
	while (ft_check_flag(format[i]))
	{
		if (format[i] == '-')
			c->- = 1;
		if (format[i] == '+')
			c->+ = 1;
		if (format[i] == '0')
			c->zr = 1;
		if (format[i] == ' ' && !c->+)
			c->spc = 1;
		if (format[i] == '#')
			c-># = 1;
		i++;
		return (1);
	}
	return (0)
}
