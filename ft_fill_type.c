/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 13:05:19 by morgani           #+#    #+#             */
/*   Updated: 2019/01/14 16:00:34 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_fill_type(t_conv *c, const char *format, int *i)
{
	if (ft_check_type(format[*i]))
		c->tp = format[(*i)++];
	if (c->tp == 'i')
		c->tp = 'd';
}
