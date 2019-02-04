/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 10:08:34 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/15 15:04:24 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_sz_h(t_conv **conv, int i)
{
	char		c;
	short		sh;

	printf("dans ft_sz_h ");
	if (i == 2)
	{
		printf("hh TEST %d\n", (char)(*conv)->arg);
		/*c = (char)(*conv)->arg;
		// printf("conv arg = %c\n", c);
		(*conv)->arg = c;
		// printf("conv arg = %c\n", c);
		printf("converti en char\n");*/
	}
	if (i == 1)
	{
		sh = (short)(*conv)->arg;
		(*conv)->arg = &sh;
		printf("converti en short\n");
	}
}

void	ft_sz_l(t_conv *conv, int i)
{
	long		lo;
	long long	lolo;

	printf("dans ft_sz_l ");
	if (i == 2)
	{
		lolo = (long long)conv->arg;
		conv->arg = &lo;
		printf("converti en long long\n");
	}
	if (i == 1)
	{
		lo = (long)conv->arg;
		conv->arg = &lo;
		printf("converti en long\n");
	}
}

int		ft_size_conv(t_conv **conv)
{
	char		c;
	short		sh;
	long		lo;
	long long	lolo;

	if ((*conv)->tp == 's' || (*conv)->tp == 'c')
	{
		printf("pas de sz conv car mauvais type de tp\n");
		return (1);
	}
	if (ft_strncmp((*conv)->sz_tp, "hh", 2) == 0)
		ft_sz_tp_tp_tp_h(conv, 2);
	else if (ft_strncmp((*conv)->sz_tp, "h", 2) == 0)
		ft_sz_h(conv, 1);
	/*else if (ft_strncmp((*conv)->sz_tp, "l", 2) == 0)
		ft_sz_l(conv, 1);
	else if (ft_strncmp((*conv)->sz, "ll", 2) == 0)
		ft_sz_l(conv, 2);*/
	printf("DANS ft_size_conv conv->arg = %c\n", (char)(*conv)->arg);
	return (1);
}