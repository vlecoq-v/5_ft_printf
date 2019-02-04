/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_b_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 15:32:30 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/04 15:32:35 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_b_f(float value, int base, t_conv *c)
{
	char		*s;
	float   	tmp;
	int			l;

	printf("value passee a itoa_baseint = %f\n", value);
	if (value == LLONG_MIN)
		return ("-9223372036854775808");
	c->sn = (value < 0 && base == 10) ? 1 : 0;
	l = 1;
	value = (value < 0) ? (-1 * value) : value;
	tmp = value;
	while (tmp /= base > 1)
		l++;
	if (!(s = (char*)malloc(sizeof(char) * (l + c->sn + 1 + 6))))
		return (NULL);
	s[l-- + c->sn + 7] = '\0';
    s[l + c->sn + 1] = '.';
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
