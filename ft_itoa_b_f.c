/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_b_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 15:32:30 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/05 19:09:24 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_b_f(long long value, t_conv *c)
{
	char			*s;
	long long		tmp;
	size_t			l;
	size_t			i;
	size_t			prc;

	printf("value passee a itoa_base_f = %llu\n", value);
	l = 1;
	tmp = value;
	i = 0;
	while (tmp /= 10)
		l++;
	i = l;
	prc = (c->prc && !c->prc_sz) ? 0 : 1;
	l = c->prc ? c->prc_sz + 1 : 6 + prc;
	printf("l = %zu\n", l);
	if (!(s = (char*)malloc(sizeof(char) * (l + 1 + prc))))
		return (NULL);
	s[0] = '.';
	s[l--] = '\0';
	while (l >= prc)
	{
		s[l--] = value % 10 + '0';
		value /= 10;
	}
	// printf("DANS itoa_base_u_int = %s\n", s);
	return (s);
}
