/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_prt_spc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:16:03 by morgani           #+#    #+#             */
/*   Updated: 2019/01/16 17:49:37 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_fill_prt_spc(t_conv *c)
{

	c->prt_spc = 0;
	if (c->prc && c->prc_sz == 0)
		c->prt_spc = c->wdth;
	else if (!c->prc || (c->prc && c->prc_sz > ft_strlen(c->str)))
		if (c->wdth > ft_strlen(c->str))
			c->prt_spc = c->wdth - ft_strlen(c->str);
		else
			c->prt_spc = 0;
	else if (c->prc && c->prc_sz != 0)
		c->prt_spc = c->wdth - c->prc_sz;
	//  printf("space = %d\n", c->prt_spc);
}
