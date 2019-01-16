/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:46:02 by morgani           #+#    #+#             */
/*   Updated: 2019/01/16 11:12:33 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_fill_arg(t_conv *c, va_list args)
{
	c->arg = va_arg(args, void*);
	// printf("FT_FILL_ARG || ARG %s\n", c->arg);
}
