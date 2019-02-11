/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tp_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:47:50 by morgani           #+#    #+#             */
/*   Updated: 2019/02/08 20:18:42 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static char		*ft_cpynull(char *dest, const char *src, size_t n)
// {
// 	unsigned long		i;

// 	i = 0;
// 	while (src[i] && i < n)
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	while (i < n)
// 	{
// 		dest[i] = '\0';
// 		i++;
// 	}
// 	return (dest);
// }

void	ft_print_tp_c(t_conv *c)
{
	char *nul;

	nul = NULL;
	if (!c->flg_tp.mns)
	{
		ft_prt_spc(c);
		if (!c->arg)
		{
			// printf("1\n");
			c->buff[c->ind++] = (char)NULL;
			c->ind++;
			// c->buff[c->ind++] = '\0';
			// printf("2\n");
		}
		else
			ft_add_to_buff(c, (char*)&c->arg);
	}
	else if (c->flg_tp.mns)
	{
		ft_add_to_buff(c, (char*)&c->arg);
		ft_prt_spc(c);
	}
}
