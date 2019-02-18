/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 10:58:17 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/18 16:33:34 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_tp_conv_str(t_conv *c, long long value)
{
	if (c->tp == 'o')
		c->str = ft_itoa_b_u((unsigned long long)value, 8, 'A');
	else if (c->tp == 'd' || c->tp == 'i')
		c->str = ft_itoa_b(value, 10, c, 0);
	else if (c->tp == 'x' || c->tp == 'p')
		c->str = ft_itoa_b_u((unsigned long long)value, 16, 'a');
	else if (c->tp == 'X')
		c->str = ft_itoa_b_u((unsigned long long)value, 16, 'A');
	else if (c->tp == 'u')
		c->str = ft_itoa_b_u((unsigned long long)value, 10, 'A');
	else if (c->tp == 'b')
		c->str = ft_itoa_b_u((unsigned long long)value, 2, 'A');
	return (1);
}

int		ft_sz_conv_str(t_conv *c)
{
	if (ft_strncmp(c->sz_tp, "h", 2) == 0 && c->tp == 'd')
		ft_tp_conv_str(c, (short)c->arg);
	else if (ft_strncmp(c->sz_tp, "h", 2) == 0)
		ft_tp_conv_str(c, (unsigned short)c->arg);
	else if (ft_strncmp(c->sz_tp, "hh", 2) == 0 && c->tp == 'd')
		ft_tp_conv_str(c, (char)c->arg);
	else if (ft_strncmp(c->sz_tp, "hh", 2) == 0)
		ft_tp_conv_str(c, (unsigned char)c->arg);
	else if (ft_strncmp(c->sz_tp, "l", 2) == 0 && c->tp == 'd')
		ft_tp_conv_str(c, (long)c->arg);
	else if (ft_strncmp(c->sz_tp, "l", 2) == 0)
		ft_tp_conv_str(c, (unsigned long)c->arg);
	else if (ft_strncmp(c->sz_tp, "ll", 2) == 0 && c->tp == 'd')
		ft_tp_conv_str(c, (long long)c->arg);
	else if (ft_strncmp(c->sz_tp, "ll", 2) == 0
		|| ft_strncmp(c->sz_tp, "j", 2) == 0)
		ft_tp_conv_str(c, (unsigned long long)c->arg);
	else if (ft_strncmp(c->sz_tp, "z", 2) == 0)
		ft_tp_conv_str(c, (size_t)c->arg);
	else if (c->sz_tp[0] == '\0' && c->tp == 'd')
		ft_tp_conv_str(c, (int)c->arg);
	else if (c->sz_tp[0] == '\0')
		ft_tp_conv_str(c, (unsigned int)c->arg);
	return (1);
}

int		ft_sz_p_conv_str(t_conv *c)
{
	c->flg = 1;
	c->flg_tp.hstg = 1;
	ft_strcpy(c->sz_tp, "l");
	c->tp = 'p';
	ft_tp_conv_str(c, (unsigned long)(c->arg));
	return (1);
}

int		ft_conv_to_str(t_conv *c, va_list args)
{
	if (c->tp == '%' && !(c->str = ft_strdup("%")))
		return (0);
	else if (c->tp == 'f')
		ft_flt_conv_str(c, args);
	else if (c->tp == 'o' || c->tp == 'd' || c->tp == 'x' || c->tp == 'X'
		|| c->tp == 'u' || c->tp == 'b')
		ft_sz_conv_str(c);
	else if (c->tp == 'p')
		ft_sz_p_conv_str(c);
	c->str_l = ft_strlen(c->str) - c->sn;
	return ((!c->str && c->tp != '!') ? 0 : 1);
}
