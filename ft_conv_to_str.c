/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 10:58:17 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/15 15:18:11 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_tp_conv_str(t_conv **conv, long long value)
{
	printf("value in ft_tp_conv_str = %lld\n", value);
	if ((*conv)->tp == 'o')
		if (!((*conv)->str = ft_strdup(ft_itoa_b_u((long long)value, 8, 'A'))))
			return (0);
	if ((*conv)->tp == 'x')
		if (!((*conv)->str = ft_strdup(ft_itoa_b_u((long long)value, 16, 'a'))))
			return (0);
	if ((*conv)->tp == 'X')
		if (!((*conv)->str = ft_strdup(ft_itoa_b_u((long long)value, 16, 'A'))))
			return (0);
	if ((*conv)->tp == 'u')
		if (!((*conv)->str = ft_strdup(ft_itoa_b_u((long long)value, 10, 'A'))))
			return (0);
	if ((*conv)->tp == 'd' || (*conv)->tp == 'i')
	{
		printf("on part sur du signed, d ou i\n");
		if (!((*conv)->str = ft_strdup(ft_itoa_b(value, 10))))
			return (0);
	}
	return (1);
}

int		ft_sz_conv_str(t_conv **conv)
{
	if ((*conv)->sz_tp[0] == '\0' && (*conv)->tp == 'd')
		ft_tp_conv_str(conv, (long long)(*conv)->arg);
	else if ((*conv)->sz_tp[0] == '\0')
		ft_tp_conv_str(conv, (unsigned long long)(*conv)->arg);
	else if (ft_strncmp((*conv)->sz_tp, "h", 2) == 0 && (*conv)->tp == 'd')
		ft_tp_conv_str(conv, (short)(*conv)->arg);
	else if (ft_strncmp((*conv)->sz_tp, "h", 2) == 0)
		ft_tp_conv_str(conv, (unsigned short)(*conv)->arg);
	else if (ft_strncmp((*conv)->sz_tp, "hh", 2) == 0 && (*conv)->tp == 'd')
		ft_tp_conv_str(conv, (char)(*conv)->arg);
	else if (ft_strncmp((*conv)->sz_tp, "hh", 2) == 0)
		ft_tp_conv_str(conv, (unsigned char)(*conv)->arg);
	else if (ft_strncmp((*conv)->sz_tp, "l", 2) == 0 && (*conv)->tp == 'd')
		ft_tp_conv_str(conv, (long)(*conv)->arg);
	else if (ft_strncmp((*conv)->sz_tp, "l", 2) == 0)
		ft_tp_conv_str(conv, (unsigned long)(*conv)->arg);
	else if (ft_strncmp((*conv)->sz_tp, "ll", 2) == 0 && (*conv)->tp == 'd')
		ft_tp_conv_str(conv, (long long)(*conv)->arg);
	else if (ft_strncmp((*conv)->sz_tp, "l", 2) == 0)
		ft_tp_conv_str(conv, (unsigned long long)(*conv)->arg);
	return (1);
}

int		ft_conv_to_str(t_conv *conv)
{
	if (conv->tp == 's' && conv->tp == 'c' && conv->tp == 'f')
	{
		printf("pas le bon type\n");
		return (0);
	}
	ft_sz_conv_str(&conv);
	if (!conv->str)
		return (0);
	return (1);
}