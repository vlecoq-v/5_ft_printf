/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_b_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 15:32:30 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/05 17:31:22 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_b_f(long long value, t_conv *c)
{
	char		*s;
	long long	tmp;
	int			l;
	int			i;

	// printf("value passee a itoa_base_u_int = %llu\n", value);
	l = 1;
	tmp = value;
	i = 0;
	while (tmp /= 10)
		l++;
	l = c->prc ? c->prc : 6;
	while (i < l && value /= 10)
			i++;
	}
	if (!(s = (char*)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	s[l--] = '\0';
	while (l >= 0)
	{
		s[l--] = value % 10 + '0';
		value /= 10;
	}
	// printf("DANS itoa_base_u_int = %s\n", s);
	return (s);
}
