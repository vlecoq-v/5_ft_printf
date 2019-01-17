/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hash.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:46:23 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/17 15:45:23 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hash(t_conv *c)
{
	if (!c->flg_tp.hstg)
		return ;
	if (c->tp == 'p' || c->tp == 'x')
		ft_putbuff(c, "Ox");
	if (c->tp == 'X')
		ft_putbuff(c, "OX");
	if (c->tp == 'o')
		ft_putbuff(c, "O");
}
