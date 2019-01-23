/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 10:58:17 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/23 18:46:32 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_tp_conv_str(t_conv **c, long long value)
{
	if ((*c)->tp == 'o' && ft_strcmp(
		((*c)->str = ft_strdup(ft_itoa_b_u((long long)value, 8, 'A'))), "0")
		&& (*c)->flg_tp.hstg)
		(*c)->str = ft_strjoin_free("0", (*c)->str, -1);
	else if ((*c)->tp == 'x' && ft_strcmp(
		(*c)->str = ft_strdup(ft_itoa_b_u((long long)value, 16, 'a')), "0")
		&& (*c)->flg_tp.hstg)
		(*c)->str = ft_strjoin_free("0x", (*c)->str, -1);
	else if ((*c)->tp == 'X' && ft_strcmp(
		(*c)->str = ft_strdup(ft_itoa_b_u((long long)value, 16, 'A')), "0")
		&& (*c)->flg_tp.hstg)
		(*c)->str = ft_strjoin_free("0X", (*c)->str, -1);
	else if ((*c)->tp == 'u')
		((*c)->str = ft_strdup(ft_itoa_b_u((long long)value, 10, 'A')));
	else if ((*c)->tp == 'd' || (*c)->tp == 'i')
		((*c)->str = ft_strdup(ft_itoa_b(value, 10, *c)));
	return (1);
}

int		ft_sz_conv_str(t_conv **c)
{
	// printf("====> FT_FILL_STRUCT || SIZE ? %d SIZE |%s|\n", (*c)->sz, (*c)->sz_tp);
	if ((*c)->sz_tp[0] == '\0' && (*c)->tp == 'd')
		ft_tp_conv_str(c, (int)(*c)->arg);
	else if ((*c)->sz_tp[0] == '\0')
		ft_tp_conv_str(c, (unsigned int)(*c)->arg);
	else if (ft_strncmp((*c)->sz_tp, "h", 2) == 0 && (*c)->tp == 'd')
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
	// printf("size_d de d ca donne %lld\n", (size_t)(*c)->arg);
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
	if (c->tp == 's' && !(c->str = ft_strdup((char*)c->arg)))
		return (0);
	if (c->tp == '%' && !(c->str = ft_strdup("%")))
		return (0);
	if (c->tp == 'c' && !(c->str = ft_strdup(" ")) && printf("hello 2\n"))
		if (!(c->str[0] = (char)c->arg)) // je me compresnds pas cette ligne
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
