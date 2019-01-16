/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/01/16 10:57:37 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_tp_d(t_conv *c)
{
    	int n;

	n = c->prc_sz - ft_strlen(c->str);
	while (c->wdth && c->wdth-- > c->prc_sz + 1)
		ft_putchar('a');
	if (c->flg_tp.pls)
		ft_putchar('+');
	if (c->prc && n > 0)
		while (n--)
			ft_putchar('0');
	ft_putstr(c->str);
	printf("\n");
}
