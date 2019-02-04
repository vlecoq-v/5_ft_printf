/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 14:46:23 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/04 12:32:13 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(const char *format, va_list args, int i)
{
	int	j;

	j = i;
	while (format[i] > 32)
		i++;
	if (format[i - 1] == 'd')
		ft_int(format, args, i);
	return (i);
}
