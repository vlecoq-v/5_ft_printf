/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/01/16 18:27:06 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_tp_c(t_conv *c)
{
	if (!c->flg_tp.mns)
	{
		ft_prt_spc(c);
		ft_putchar((char)c->arg); //a ecrire dans la chaine
	}
	else if (c->flg_tp.mns)
	{
		ft_putchar((char)c->arg);	//a ecrire dans la chaine
		ft_prt_spc(c);
	}
}
