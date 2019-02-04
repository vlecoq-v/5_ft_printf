/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 10:58:17 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/04 11:19:26 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_tp_conv_str(t_conv **conv, long long value)
{
	if ((*conv)->tp == 'o')
		if (!((*conv)->str = ft_strdup(ft_itoa_b_u((long long)value, 8, 'A'))))
			return (0);
	if ((*conv)->tp == 'x' || (*conv)->tp == 'p')
		if (!((*conv)->str = ft_strdup(ft_itoa_b_u((long long)value, 16, 'a'))))
			return (0);
	if ((*conv)->tp == 'X')
		if (!((*conv)->str = ft_strdup(ft_itoa_b_u((long long)value, 16, 'A'))))
			return (0);
	if ((*conv)->tp == 'u')
		if (!((*conv)->str = ft_strdup(ft_itoa_b_u((long long)value, 10, 'A'))))
			return (0);
	if ((*conv)->tp == 'd' || (*conv)->tp == 'i')
		if (!((*conv)->str = ft_strdup(ft_itoa_b(value, 10, *conv))))
			return (0);
	return (1);
}

int		ft_sz_conv_str(t_conv **c)
{
	// ft_prt_strct(*c);
	if (ft_strncmp((*c)->sz_tp, "h", 2) == 0 && (*c)->tp == 'd')
		ft_tp_conv_str(c, (short)(*c)->arg);
	else if (ft_strncmp((*c)->sz_tp, "h", 2) == 0)
		ft_tp_conv_str(c, (unsigned short)(*c)->arg);
	else if (ft_strncmp((*c)->sz_tp, "hh", 2) == 0 && (*c)->tp == 'd')
		ft_tp_conv_str(c, (char)(*c)->arg);
	else if (ft_strncmp((*c)->sz_tp, "hh", 2) == 0)
		ft_tp_conv_str(c, (unsigned char)(*c)->arg);
	else if (ft_strncmp((*c)->sz_tp, "l", 2) == 0 && (*c)->tp == 'd')
		ft_tp_conv_str(c, (long)(*c)->arg);
	else if (ft_strncmp((*c)->sz_tp, "l", 2) == 0)
		ft_tp_conv_str(c, (unsigned long)(*c)->arg);
	else if (ft_strncmp((*c)->sz_tp, "ll", 2) == 0 && (*c)->tp == 'd')
		ft_tp_conv_str(c, (long long)(*c)->arg);
	else if (ft_strncmp((*c)->sz_tp, "ll", 2) == 0)
		ft_tp_conv_str(c, (unsigned long long)(*c)->arg);
	else if (ft_strncmp((*c)->sz_tp, "z", 2) == 0)
		ft_tp_conv_str(c, (size_t)(*c)->arg);
	else if ((*c)->sz_tp[0] == '\0' && (*c)->tp == 'd')
		ft_tp_conv_str(c, (int)(*c)->arg);
	else if ((*c)->sz_tp[0] == '\0')
		ft_tp_conv_str(c, (unsigned int)(*c)->arg);
	// printf("size_d de d ca donne %x\n", (unsigned int)(*c)->arg);
	return (!((*c)->str) ? 0 : 1);
}

//fonctionne quand on envoie i car il va chercher l'addresse 
// mais comportement indefinie dans printf classique si on envoie la valeure

int		ft_sz_p_conv_str(t_conv *c) // juste a ajouter les # dans le print
{
	c->flg = 1;
	c->flg_tp.hstg = 1;
	ft_strcpy(c->sz_tp, "l");
	c->tp = 'x';
	ft_tp_conv_str(&c, (unsigned long)(c->arg));
	if (!(c->str))
		return (0);
	return (1);
}

int		ft_conv_to_str(t_conv *c) // A PROTEGER
{
	// printf("IN FT_c_TO_STR, c->tp = |%c|\n", c->tp);

	if (c->tp == '%' && !(c->str = ft_strdup("%")))
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
	c->str_l = (c->sn) ? ft_strlen(c->str) - 1 : ft_strlen(c->str);
	// printf("OUT OF FT_CONV_TO_STR\n");
	return (1);
}
