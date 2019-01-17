/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 18:47:11 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/17 12:03:11 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_tp_p(t_conv *c)
{
	printf("dans print tp p\n");
	if (!c->flg_tp.mns)
		ft_prt_spc(c);
	if (!ft_strcmp(c->str, "0")
		ft_prt_hash(c);
	ft_putstr((char*)c->str); //a ecrire dans la chaine
	if (c->flg_tp.mns)
		ft_prt_spc(c);
}
