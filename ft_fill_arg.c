/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:46:02 by morgani           #+#    #+#             */
/*   Updated: 2019/01/23 14:22:14 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_fill_arg(t_conv *c, va_list args)
{
	if (c->tp == '%' && c->tp == '!')
		return ;
	else if (c->tp == 's' || c->tp == 'c')
		c->arg = va_arg(args, void*);
	else
		c->ll_arg = va_arg(args, long long);
}
