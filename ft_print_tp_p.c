/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 18:47:11 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/18 17:24:11 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_tp_p(t_conv *c)
{
	if (!c->flg_tp.mns)
		ft_prt_spc(c);
	if (ft_strcmp(c->str, "0"))
		ft_print_hash(c);
	ft_putbuff(c, (char*)c->str);
	if (c->flg_tp.mns)
		ft_prt_spc(c);
}
