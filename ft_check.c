/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 14:46:23 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/09 16:19:54 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

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