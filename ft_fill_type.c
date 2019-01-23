/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 13:05:19 by morgani           #+#    #+#             */
/*   Updated: 2019/01/22 16:23:32 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_fill_type(t_conv *c, const char *format, int *i)
{
	if (ft_check_type(format[*i]))
		c->tp = format[(*i)++];
	else if (c->wdth)
		c->tp = '!';
	else
		return (0);
	if (c->tp == 'i')
		c->tp = 'd';
	return (1);
}
