/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset_buff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 13:27:20 by morgani           #+#    #+#             */
/*   Updated: 2019/02/14 14:23:12 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_reset_buff(t_conv *c)
{
	c->ind = 0;
	c->cmpt += BUFF_SZ;
	write(1, c->buff, BUFF_SZ);
	ft_bzero(c->buff, BUFF_SZ);
}
