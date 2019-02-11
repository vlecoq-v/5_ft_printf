/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 14:51:54 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/11 10:56:31 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_b(long long value, int base, t_conv *c, int neg)
{
	char		*s;
	long long	tmp;
	int			l;

	// printf("value passee a itoa_baseint = %lld\n", value);
	if (value == LLONG_MIN)
	{
		c->sn = 1;
		return ("-9223372036854775808");
	}
	c->sn = ((value < 0 && base == 10) || neg) ? 1 : 0;
	l = 1;
	value = (value < 0) ? (-1 * value) : value;
	tmp = value;
	while (tmp /= base)
		l++;
	if (!(s = (char*)malloc(sizeof(char) * (l + c->sn + 1))))
		return (NULL);
	s[l-- + c->sn] = '\0';
	s[0] = '-';
	while (l + c->sn >= 0 + c->sn)
	{
		s[l-- + c->sn] = (value % base < 10)
			? value % base + '0' : value % base + 'A' - 10;
		value /= base;
	}
	//  printf("DANS itoa_base_int = %s\n", s);
	return (s);
}
