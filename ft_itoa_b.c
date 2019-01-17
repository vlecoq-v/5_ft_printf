/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 14:51:54 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/17 08:52:53 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_b(long long value, int base)
{
	char		*s;
	int			sgn;
	int			tmp;
	int			l;

	// printf("value passee a itoa_base_int = %lld\n", value);
	if (value == LLONG_MIN)
		return ("-9223372036854775808");
	sgn = (value < 0 && base == 10) ? 1 : 0;
	l = 1;
	value = (value < 0) ? (-1 * value) : value;
	tmp = value;
	// printf("2222 value passee a itoa_base_int = %d\n", value);
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
	//  printf("DANS itoa_base_int = %s\n", s);
	return (s);
}
