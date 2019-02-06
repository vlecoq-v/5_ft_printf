/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_b_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 15:32:30 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/06 14:41:56 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_b_f(long long value, t_conv *c)
{
	char			*s;
	long long		tmp;
	int				l;

	l = 1;
	tmp = value;
	while (tmp /= 10)
		l++;
	l = c->prc ? c->prc_sz + 1 : 6 + 1;
	if (!(s = (char*)malloc(sizeof(char) * (l + 1 + 1))))
		return (NULL);
	s[0] = '.';
	l = (c->prc && !c->prc_sz) ? 0 : l;
	s[l--] = '\0';
	while (l >= (int)1)
	{
		s[l--] = value % 10 + '0';
		value /= 10;
	}
	// printf("DANS itoa_base_u_int = %s\n", s);
	return (s);
}
