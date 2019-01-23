/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:46:23 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/23 16:07:48 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_flg(t_conv *c)
{
	if ((c->flg_tp.zr && c->sn) || (c->prc && c->sn) || c->sn)
		ft_add_to_buff(c, "-");
	if (c->flg_tp.pls && !c->sn && c->tp == 'd')
		ft_add_to_buff(c, "+");
}
