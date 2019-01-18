/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_spc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:21:59 by morgani           #+#    #+#             */
/*   Updated: 2019/01/17 13:40:46 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_prt_spc(t_conv *c)
{
	while (c->prt_spc--)
		((!c->flg_tp.mns && c->flg_tp.zr) ||
		(c->tp == 'd' && c->prc_sz > ft_strlen(c->str))) ?
			ft_add_to_buff(c, "0") : ft_add_to_buff(c, " ");
}
