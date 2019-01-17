/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:46:02 by morgani           #+#    #+#             */
/*   Updated: 2019/01/17 11:20:09 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_fill_arg(t_conv *c, va_list args)
{
	// if (c->tp == 'd' || c->tp == 'i')
	// 	c->nbr = va_arg(args, int);
	// else
		c->arg = va_arg(args, void*);
	// printf("FT_FILL_ARG || ARG %s\n", c->arg);
}
