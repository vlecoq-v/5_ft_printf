/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/01/16 15:59:59 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_tp_s(t_conv *c)
{
	size_t x;

	x = 0;

	if (!c->flg_tp.mns && !c->prc)
	{
		ft_prt_spc(c);
		ft_putstr(c->arg);
	}
	else if (c->flg_tp.mns)
	{
		if (!c->prc || (c->prc && c->prc_sz > ft_strlen(c->arg)))
			ft_putstr(c->arg);
		else
			while (c->prc_sz--)			
				ft_putchar(*(((char*)c->arg) + x++)); // a remplacer par strncpy
		ft_prt_spc(c);
	}
	else if (c->prc && c->prc_sz == 0)
		ft_prt_spc(c);
}
