/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset_buff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 13:27:20 by morgani           #+#    #+#             */
/*   Updated: 2019/02/11 11:33:06 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_reset_buff(t_conv *c)
{
	c->ind = 0;
	c->cmpt += BUFF_SZ;
	// printf("BUFF = %s, FT_STRLEN = %zu\n", c->buff, ft_strlen(c->buff));
	write(1, c->buff, BUFF_SZ);
	ft_bzero(c->buff, BUFF_SZ);
}
