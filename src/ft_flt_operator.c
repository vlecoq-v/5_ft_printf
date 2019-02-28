/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flt_operator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:55:53 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/28 16:51:28 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

long double ft_flt_div(long double dbl, long double dv)
{
	long double	i;
	size_t		sgn;

	sgn = 0;
	i = 0.0;
	if (dv == 0)
		return (0);
	if (dbl < 0.0)
	{
		dbl = -dbl;
		sgn = 1;
	}
	while ((dv * (i + 1) < dbl))
		i++;
	return (sgn == 0 ? i : -i);
}

long double ft_flt_mod(long double dbl, long double dv)
{
	long double	i;
	size_t		sgn;

	sgn = 0;
	i = 0.0;
	if (dv == 0 || dv >= dbl)
		return (0);
	if (dbl < 0.0)
	{
		dbl = -dbl;
		sgn = 1;
	}
	while ((dv * (i + 1) < dbl))
		i++;
	return (sgn == 0 ? dbl - i * dv : -(dbl - i * dv));
}