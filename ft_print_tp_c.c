/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/02/04 16:36:32 by morgani          ###   ########.fr       */
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
