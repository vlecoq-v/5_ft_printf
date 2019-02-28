/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flt_conv_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 15:01:04 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/28 17:02:08 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flt_conv_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 15:01:04 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/28 14:54:36 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

double	ft_abs_dbl(double n)
{
	// if (n == LLONG_MIN)
	// 	return (9223372036854775807);
	return (n < 0 ? -n : n);
}

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
	return (s);
}

int		ft_flt_tp_conv_str(t_conv *c)
{
	char			*dec;
	char			*ent;
	long long		fra;
	size_t			pwr;

	// if (c->arg_f >= 9223372036854775296.000)
	// {
	// 	c->str = ft_strdup("9223372036854775808.000000");
	// 	return (1);
	// }
	pwr = (!c->prc_sz) ? 7 : c->prc_sz + 1;
	fra = ft_abs((c->arg_f - (long long)c->arg_f) * ft_pwr(10, pwr));
	// printf("fra = %")
	if (ft_flt_mod(fra, ft_pwr(10, pwr - 1)))
		fra += 10;
	//fra = fra % 10 >= 5 ? fra / 10 + 1 : fra / 10;
	c->arg_f = (fra && fra >= (1 * ft_pwr(10, pwr) / 10))
		? c->arg_f + 1 : c->arg_f;
	if (!(dec = ft_itoa_b_f(fra, c)))
		return (0);
	if (!(ent = (c->arg_f < 0) ? ft_itoa_b((long long)c->arg_f, 10, c, 1)
		: ft_itoa_b((long long)c->arg_f, 10, c, 0)))
		return (0);
	c->str = ft_strjoin_free(ent, dec, ft_strlen(dec));
	free(dec);
	return (!(c->str) ? 0 : 1);
}

int		ft_ll_tp_conv_str(t_conv *c)
{
	char		*dec;
	char		*ent;
	long long	fra;
	size_t		pwr;

	pwr = (!c->prc_sz) ? 7 : c->prc_sz + 1;
	fra = ft_abs_dbl((c->arg_lf - (long long)c->arg_lf) * ft_pwr(10, pwr));
	fra = fra % 10 >= 5 ? fra / 10 + 1 : fra / 10;
	c->arg_lf = (fra >= 1 * ft_pwr(10, pwr) / 10) ? c->arg_lf + 1 : c->arg_lf;
	if (!(dec = ft_itoa_b_f(fra, c)))
		return (0);
	if (!(ent = (c->arg_lf < 0) ? ft_itoa_b((long long)c->arg_lf, 10, c, 1)
		: ft_itoa_b((long long)c->arg_lf, 10, c, 0)))
		return (0);
	c->str = ft_strjoin_free(ent, dec, ft_strlen(dec));
	free(dec);
	return (!(c->str) ? 0 : 1);
}

int		ft_flt_conv_str(t_conv *c, va_list args)
{
	if (ft_strncmp(c->sz_tp, "L", 2) == 0)
	{
		c->arg_lf = va_arg(args, long double);
		if (!(ft_ll_tp_conv_str(c)))
			return (0);
	}
	else
	{
		c->arg_f = va_arg(args, double);
		printf("PRINTF %f\n", c->arg_f);
		if (!(ft_flt_tp_conv_str(c)))
			return (0);
	}
	return (1);
}