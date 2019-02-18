/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/02/14 14:23:12 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putbuff(t_conv *c, char *s)
{
	if (!s)
		return ;
	while (*s)
		ft_add_to_buff(c, s++);
}
