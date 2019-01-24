/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_buff.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 13:27:53 by morgani           #+#    #+#             */
/*   Updated: 2019/01/24 11:41:39 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_add_to_buff(t_conv *c, char *s)
{
	ft_strncpy(c->buff + c->ind++, s, 1);
	if (c->ind == BUFF_SZ)
		ft_reset_buff(c);
	return (1);
}
