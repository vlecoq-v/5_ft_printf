/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:56:41 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/11 15:01:56 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		i;

	i = 0;
	printf("FORMAT = (%s)\n", format);
	va_start(args, format);
	while (format[i] != '\0')
	{
		printf("Debut boucle formt[%d] = %c\n", i, format[i]);
		while (format[i] != '%')
			write(1, &format[i++], 1);
		if (format[i] == '%')
		{
			printf("DETECT %% format[%d]%c\n", i, format[i]);
			i++;
			ft_print_conv(format, &i, args);
		}
	}
	va_end(args);
	return (i);
}
