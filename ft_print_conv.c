/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:20:30 by morgani           #+#    #+#             */
/*   Updated: 2019/01/10 11:17:55 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_print_conv(char *format, int i, va_list args)
{
	int		j;
	t_conv	*c;
	
	if (!ft_fill_struct(c, format, i++, args))
		return (-1);
	return (1);
}
