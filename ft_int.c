/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 14:27:00 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/09 16:19:13 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	ft_int(const char *format, va_list args, int i)
{
	if(format)
		ft_putnbr(va_arg(args, int));
	//while (format[i] > 32 && format[i])
	//	i++;
	return (i);
}
