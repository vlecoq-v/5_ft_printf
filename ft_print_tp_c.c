/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/01/17 14:43:18 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_tp_c(t_conv *c)
{
	if (!c->flg_tp.mns)
	{
		ft_prt_spc(c);
		ft_add_to_buff(c, (char*)&c->arg);
	}
	else if (c->flg_tp.mns)
	{
		ft_add_to_buff(c, (char*)&c->arg);
		ft_prt_spc(c);
	}
}
