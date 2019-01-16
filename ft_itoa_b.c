/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 14:51:54 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/16 10:39:24 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_b(long long value, int base)
{
	char		*s;
	int			sgn;
	long long	tmp;
	int			l;

	printf("value passee a itoa_base_int = %lld\n", value);
	if (value == LLONG_MIN)
		return ("-9223372036854775808");
	sgn = (value < 0 && base == 10) ? 1 : 0;
	l = 1;
	value = (value < 0) ? -value: value;
	tmp = value;
	while (tmp /= base)
		l++;
	if (!(s = (char*)malloc(sizeof(char) * (l + sgn + 1))))
		return (NULL);
	s[l-- + sgn] = '\0';
	s[0] = '-';
	while (l + sgn >= 0 + sgn)
	{
		s[l-- + sgn] = (value % base < 10)
			? value % base + '0' : value % base + 'A' - 10;
		value /= base;
	}
	printf("DANS itoa_base_int = %s\n", s);
	return (s);
}
