/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:16:48 by morgani           #+#    #+#             */
/*   Updated: 2019/01/11 15:24:50 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fill_struct(t_conv *c, const char *format, int *i, va_list args)
{
	while (ft_fill_flag(c, format, i))
		(*i)++;
	printf("ft_fill_struct i = %d\n", *i);
	return (1);
}
