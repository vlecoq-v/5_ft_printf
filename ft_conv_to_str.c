/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 10:58:17 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/15 15:28:11 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_tp_conv_str(t_conv *c, long long value)
{
	if (c->tp == 'o')
		if (!(c->str = ft_itoa_b_u((unsigned long long)value, 8, 'A')))
			return (0);
	if (c->tp == 'b')
		if (!(c->str = ft_itoa_b_u((unsigned long long)value, 2, 'A')))
			return (0);
	if (c->tp == 'x' || c->tp == 'p')
	{
		// printf("in\n");
		if (!(c->str = ft_itoa_b_u((unsigned long long)value, 16, 'a')))
			return (0);
	}
	if (c->tp == 'X')
		if (!(c->str = ft_itoa_b_u((unsigned long long)value, 16, 'A')))
			return (0);
	if (c->tp == 'u')
		if (!(c->str = ft_itoa_b_u((unsigned long long)value, 10, 'A')))
			return (0);
	if (c->tp == 'd' || c->tp == 'i')
		if (!(c->str = ft_itoa_b(value, 10, c, 0)))
			return (0);
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
	else if (ft_strncmp(c->sz_tp, "ll", 2) == 0 || ft_strncmp(c->sz_tp, "j", 2) == 0)
		ft_tp_conv_str(c, (unsigned long long)c->arg);
	else if (ft_strncmp(c->sz_tp, "z", 2) == 0)
		ft_tp_conv_str(c, (size_t)c->arg);
	else if (c->sz_tp[0] == '\0' && c->tp == 'd')
		ft_tp_conv_str(c, (int)c->arg);
	else if (c->sz_tp[0] == '\0')
		ft_tp_conv_str(c, (unsigned int)c->arg);
	return (!(c->str) ? 0 : 1);
}

//fonctionne quand on envoie i car il va chercher l'addresse 
// mais comportement indefinie dans printf classique si on envoie la valeure

int		ft_sz_p_conv_str(t_conv *c) // juste a ajouter les # dans le print
{
	// printf("modif pour p type\n");
	c->flg = 1;
	c->flg_tp.hstg = 1;
	ft_strcpy(c->sz_tp, "l");
	c->tp = 'p';
	ft_tp_conv_str(c, (unsigned long)(c->arg));
	return (c->str ? 1 : 0);
}

int		ft_conv_to_str(t_conv *c, va_list args) // A PROTEGER
{
	// printf("IN FT_c_TO_STR, c->tp = |%c|\n", c->tp);
	if (c->tp == '%' && !(c->str = ft_strdup("%")))
		return (0);
	if (c->tp == 'f')
		if (!(ft_flt_conv_str(c, args)))
			return (0);
	if (c->tp == 'o' || c->tp == 'd' || c->tp == 'x' || c->tp == 'X' || c->tp == 'u' || c->tp == 'b')
		if (!ft_sz_conv_str(c))
			return (0);
	if (c->tp == 'p')
		if (!(ft_sz_p_conv_str(c)))
			return (0);
	if (!c->str && c->tp != '!')
		return (0);
	c->str_l = (c->sn) ? ft_strlen(c->str) - 1 : ft_strlen(c->str);
	c->zero = !ft_strcmp(STR, "0") ? 1 : 0;
	return (1);
}
