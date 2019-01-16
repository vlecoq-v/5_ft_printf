/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_spc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:21:59 by morgani           #+#    #+#             */
/*   Updated: 2019/01/16 16:28:17 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_prt_spc(t_conv *c)
{
	while (c->prt_spc--)
		(!c->flg_tp.mns && c->flg_tp.zr) ? ft_putchar('0') : ft_putchar(' '); //faire strcpy
}
