/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 10:58:17 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/23 14:30:16 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_tp_conv_str(t_conv **c, long long value)
{
	printf("FT_TP_CONV_STR VALUE = %lld\n", value);
	if ((*c)->tp == 'o')
		if (!((*c)->str = ft_strdup(ft_itoa_b_u((long long)value, 8, 'A'))))
			return (0);
	if ((*c)->tp == 'x' || (*c)->tp == 'p')
		if (!((*c)->str = ft_strdup(ft_itoa_b_u((long long)value, 16, 'a'))))
			return (0);
	if ((*c)->tp == 'X')
		if (!((*c)->str = ft_strdup(ft_itoa_b_u((long long)value, 16, 'A'))))
			return (0);
	if ((*c)->tp == 'u')
		if (!((*c)->str = ft_strdup(ft_itoa_b_u((long long)value, 10, 'A'))))
			return (0);
	if ((*c)->tp == 'd' || (*c)->tp == 'i')
		if (!((*c)->str = ft_strdup(ft_itoa_b(value, 10, *c))))
			return (0);
	printf("FT_TP_CONV_STR STR = %s\n", (*c)->str);
	return (1);
}

int		ft_sz_conv_str(t_conv **c)
{
	// printf("====> FT_FILL_STRUCT || SIZE ? %d SIZE |%s|\n", (*c)->sz, (*c)->sz_tp);
	if ((*c)->sz_tp[0] == '\0' && (*c)->tp == 'd')
		ft_tp_conv_str(c, (int)(*c)->ll_arg);
	else if ((*c)->sz_tp[0] == '\0')
		ft_tp_conv_str(c, (unsigned int)(*c)->ll_arg);
	else if (ft_strncmp((*c)->sz_tp, "h", 2) == 0 && (*c)->tp == 'd')
		ft_tp_conv_str(c, (short)(*c)->ll_arg);
	else if (ft_strncmp((*c)->sz_tp, "h", 2) == 0)
		ft_tp_conv_str(c, (unsigned short)(*c)->ll_arg);
	else if (ft_strncmp((*c)->sz_tp, "hh", 2) == 0 && (*c)->tp == 'd')
		ft_tp_conv_str(c, (char)(*c)->ll_arg);
	else if (ft_strncmp((*c)->sz_tp, "hh", 2) == 0)
		ft_tp_conv_str(c, (unsigned char)(*c)->ll_arg);
	else if (ft_strncmp((*c)->sz_tp, "l", 2) == 0 && (*c)->tp == 'd')
		ft_tp_conv_str(c, (long)(*c)->ll_arg);
	else if (ft_strncmp((*c)->sz_tp, "l", 2) == 0)
		ft_tp_conv_str(c, (unsigned long)(*c)->ll_arg);
	else if (ft_strncmp((*c)->sz_tp, "ll", 2) == 0 && (*c)->tp == 'd')
		ft_tp_conv_str(c, (long long)(*c)->ll_arg);
	else if (ft_strncmp((*c)->sz_tp, "ll", 2) == 0)
		ft_tp_conv_str(c, (unsigned long long)(*c)->ll_arg);
	else if (ft_strncmp((*c)->sz_tp, "z", 2) == 0)
		ft_tp_conv_str(c, (size_t)(*c)->ll_arg);
	// printf("size_d de d ca donne %lld\n", (size_t)(*c)->arg);
	return (!((*c)->str) ? 0 : 1);
}

//fonctionne quand on envoie i car il va chercher l'addresse 
// mais comportement indefinie dans printf classique si on envoie la valeure

int		ft_sz_p_conv_str(t_conv *c) // juste a ajouter les # dans le print
{
	// printf("modif pour p type\n");
	c->flg = 1;
	c->flg_tp.hstg = 1;
	ft_strcpy(c->sz_tp, "l");
	ft_tp_conv_str(&c, (unsigned long)(c->ll_arg));
	if (!(c->str))
		return (0);
	return (1);
}

int		ft_conv_to_str(t_conv *c) // A PROTEGER
{
	// printf("IN FT_c_TO_STR, c->tp = |%c|\n", c->tp);
	if (c->tp == 's' && !(c->str = ft_strdup((char*)c->arg)))
		return (0);
	if (c->tp == '%' && !(c->str = ft_strdup("%")))
		return (0);
	if (c->tp == 'c' && !(c->str = ft_strdup(" ")))
		if (!(c->str[0] = (char)c->arg))
			return (0);
	if (c->tp == 'f')
		return (0);
	if (c->tp == 'p')
		if (!ft_sz_p_conv_str(c))
			return (0);
	if (c->tp == 'o' || c->tp == 'd' || c->tp == 'x' || c->tp == 'X' || c->tp == 'u')
		if (!ft_sz_conv_str(&c))
			return (0);
	if (!c->str && c->tp != '!')
		return (0);
	c->str_l = ft_strlen(c->str);
	// printf("OUT OF FT_CONV_TO_STR\n");
	return (1);
}
