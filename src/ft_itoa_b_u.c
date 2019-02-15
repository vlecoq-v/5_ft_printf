/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_b_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 14:52:59 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/15 15:25:32 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_itoa_b_u(unsigned long long value, int base, char cap)
{
	char					*s;
	unsigned long long		tmp;
	int						l;

	l = 1;
	tmp = value;
	while (tmp /= base)
		l++;
	if (!(s = (char*)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	s[l--] = '\0';
	while (l >= 0)
	{
		s[l--] = (value % base < 10)
			? value % base + '0' : value % base + cap - 10;
		value /= base;
	}
	return (s);
}
