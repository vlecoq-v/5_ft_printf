/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 10:58:17 by vlecoq-v          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/01/17 12:00:31 by vlecoq-v         ###   ########.fr       */
=======
/*   Updated: 2019/01/17 17:01:37 by vlecoq-v         ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_tp_conv_str(t_conv **conv, long long value)
{
	if ((*conv)->tp == 'o')
<<<<<<< HEAD
		if (!((*conv)->str = ft_itoa_b_u((long long)value, 8, 'A')))
			return (0);
	if ((*conv)->tp == 'x')
		if (!((*conv)->str = ft_itoa_b_u((long long)value, 16, 'a')))
=======
	{
		if (!((*conv)->str = ft_strdup(ft_itoa_b_u((long long)value, 8, 'A'))))
			return (0);
	}
	if ((*conv)->tp == 'x' || (*conv)->tp == 'p')
	{
		if (!((*conv)->str = ft_strdup(ft_itoa_b_u((long long)value, 16, 'a'))))
>>>>>>> master
			return (0);
	}
	if ((*conv)->tp == 'X')
		if (!((*conv)->str = ft_itoa_b_u((long long)value, 16, 'A')))
			return (0);
	if ((*conv)->tp == 'u')
		if (!((*conv)->str = ft_itoa_b_u((long long)value, 10, 'A')))
			return (0);
	if ((*conv)->tp == 'd' || (*conv)->tp == 'i')
<<<<<<< HEAD
		if (!((*conv)->str = ft_itoa_b(value, 10)))
=======
		if (!((*conv)->str = ft_strdup(ft_itoa_b(value, 10, *conv))))
>>>>>>> master
			return (0);
	return (1);
}

int		ft_sz_conv_str(t_conv **conv)
{
<<<<<<< HEAD
	printf("conv arg dans sz_conv_str = %d\n", (*conv)->arg);
=======
	// printf("IN FT_SZ_CONV_STR\n");
>>>>>>> master
	if ((*conv)->sz_tp[0] == '\0' && (*conv)->tp == 'd')
		ft_tp_conv_str(conv, (int)(*conv)->arg);
	else if ((*conv)->sz_tp[0] == '\0')
		ft_tp_conv_str(conv, (unsigned int)(*conv)->arg);
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
	{
		printf("in long long signed\b");
		ft_tp_conv_str(conv, (long long)(*conv)->arg);
<<<<<<< HEAD
	}
=======
>>>>>>> master
	else if (ft_strncmp((*conv)->sz_tp, "ll", 2) == 0)
		ft_tp_conv_str(conv, (unsigned long long)(*conv)->arg);
	if (!((*conv)->str))
		return (0);
	return (1);
}

//fonctionne quand on envoie i car il va chercher l'addresse 
// mais comportement indefinie dans printf classique si on envoie la valeure

int		ft_sz_p_conv_str(t_conv *c) // juste a ajouter les # dans le print
{
	// printf("modif pour p type\n");
	c->flg = 1;
	c->flg_tp.hstg = 1;
	ft_strcpy(c->sz_tp, "l");
	ft_tp_conv_str(&c, (unsigned long)(c->arg));
	if (!(c->str))
		return (0);
	return (1);
}

int		ft_conv_to_str(t_conv *conv) // A PROTEGER
{
	// printf("IN FT_CONV_TO_STR, conv->tp = %c\n", conv->tp);
	if (conv->tp == 's' && !(conv->str = ft_strdup((char*)conv->arg)))
		return (0);
	if (conv->tp == 'c' && !(conv->str = ft_strdup(" ")))
		if (!(conv->str[0] = (char)conv->arg)) // je me comprends pas cette ligne
			return (0);
	if (conv->tp == 'f')
		return (0);
<<<<<<< HEAD
	}
	if (conv->tp == 'p')
	{
		if (ft_sz_p_conv_str(conv))
=======
	if (conv->tp == 'p')
		if (!ft_sz_p_conv_str(conv))
			return (0);
	if (conv->tp == 'o' || conv->tp == 'd' || conv->tp == 'x' || conv->tp == 'X')
		if (!ft_sz_conv_str(&conv))
>>>>>>> master
			return (0);
	if (!conv->str)
		return (0);
	// printf("OUT OF FT_CONV_TO_STR\n");
	return (1);
}
