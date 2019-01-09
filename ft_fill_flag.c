/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 19:23:42 by morgani           #+#    #+#             */
/*   Updated: 2019/01/09 19:33:32 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_fill_flag(va_list *c, char *format, int i)
{
	if (ft_check_flag(format[i]))
	{
		c->flg = format[i];
		i++;
		return (1);
	}
	return (0)
}
