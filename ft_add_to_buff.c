/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_buff.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 13:27:53 by morgani           #+#    #+#             */
/*   Updated: 2019/02/09 16:54:10 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_add_to_buff(t_conv *c, char *s)
{
	// printf("s = |%s|\n", s);
	c->cmpt += 1;



	ft_strncpy(c->buff + c->ind++, s, 1);
	// printf("c->buff = |%s|\n", c->buff - c->ind);
	if (c->ind == BUFF_SZ)
		ft_reset_buff(c);
	return (1);
}
