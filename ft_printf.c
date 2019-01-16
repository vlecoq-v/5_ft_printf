/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:56:41 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/16 11:11:54 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		i;

	i = 0;
	// printf("FT_PRINTF || FORMAT = (%s)\n", format);
	va_start(args, format);
	while (format[i] != '\0')
	{
		// printf("FT_PRINTF || Debut boucle formt[%d] = %c\n", i, format[i]);
		while (format[i] && format[i] != '%')
			ft_putchar(format[i++]);
		if (format[i] == '%')
		{
			// printf("FT_PRINTF || DETECT %% format[%d]%c\n", i, format[i]);
			i++;
			ft_print_conv(format, &i, args);
		}
	}
	va_end(args);
	return (i);
}
