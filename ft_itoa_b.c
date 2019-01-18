/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 14:51:54 by vlecoq-v          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/01/17 11:32:32 by vlecoq-v         ###   ########.fr       */
=======
/*   Updated: 2019/01/17 11:26:46 by morgani          ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_b(long long value, int base, t_conv *c)
{
	char		*s;
	int			tmp;
	int			l;

	// printf("value passee a itoa_baseint = %lld\n", value);
	if (value == LLONG_MIN)
		return ("-9223372036854775808");
	c->sn = (value < 0 && base == 10) ? 1 : 0;
	l = 1;
<<<<<<< HEAD
	value = (value < 0) ? -value: value;
	// printf("value = -VALUE int = %lld\n", -value);
=======
	value = (value < 0) ? (-1 * value) : value;
>>>>>>> master
	tmp = value;
	// printf("2222 value passee a itoa_base_int = %d\n", value);
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
<<<<<<< HEAD
	printf("DANS itoa_base_int = %s\n", s);
=======
	//  printf("DANS itoa_base_int = %s\n", s);
>>>>>>> master
	return (s);
}
