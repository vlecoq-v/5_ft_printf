/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flt_conv_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 15:01:04 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/08 11:06:42 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_b_f(long long value, t_conv *c)
{
	char			*s;
	long long		tmp;
	int				l;

	printf("DANS itoa_base_u_int = %lld\n", value);
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

int		ft_ll_tp_conv_str(t_conv *c)
{
	char		*dec;
	char		*ent;
	long long		fra;
	size_t		pwr;

	pwr = (!c->prc_sz) ? 7 : c->prc_sz + 1;
	printf("arg_f = %f\n", c->arg_f);
	printf("arg_f LONG LONG = %lld\n", (long long)c->arg_f);
	printf("arg_f LONG LONG = %lld\n", ft_abs((c->arg_f - (long long)c->arg_f)));
	fra = ft_abs((c->arg_f - (long long)c->arg_f) * ft_pwr(10, pwr));
	printf("FRA avant  = %lld\n", fra);
	fra = fra % 10 >= 5 ? fra / 10 + 1 : fra / 10;
	printf("FRA apres = %lld\n", fra);
	c->arg_f = (fra >= 1 * ft_pwr(10, pwr) / 10) ? c->arg_f + 1 : c->arg_f;
	// dec = NULL;
	dec = ft_itoa_b_f(fra, c);
	printf("DEC = %s\n", ft_itoa_b_f(fra, c));
	if (!(ent = (c->arg_f < 0) ? ft_itoa_b((long long)c->arg_f, 10, c, 1) :
		ft_itoa_b((long long)c->arg_f, 10, c, 0)))
		return (0);
	printf("ent = %f\n", c->arg_f);
	printf("DEC = %s\n", dec);
	printf("ft_strlen dec = %zu\n", ft_strlen(dec));
	c->str = ft_strjoin_free(ent, dec, ft_strlen(dec));
	free(dec);
	printf("c->str = %s\n", c->str);
	return (1);
}

// int		ft_L_tp_conv_str(t_conv *c)
// {
// 	char		*dec;
// 	char		*ent;
// 	long long	fra;
// 	size_t		pwr;

// 	pwr = (!c->prc_sz) ? 7 : c->prc_sz + 1;
// 	fra = ft_abs((c->arg_f - (long long)c->arg_f) * ft_pwr(10, pwr));
// 	fra = fra % 10 >= 5 ? fra / 10 + 1 : fra / 10;
// 	// printf("fra = %lld\n", fra);
// 	c->arg_f = (fra >= 1 * ft_pwr(10, pwr) / 10) ? c->arg_f + 1 : c->arg_f;
// 	// dec = NULL;
// 	dec = ft_itoa_b_f(fra, c);
// 	if (!(ent = (c->arg_f < 0) ? ft_itoa_b((long long)c->arg_f, 10, c, 1) :
// 		ft_itoa_b((long long)c->arg_f, 10, c, 0)))
// 		return (0);
// 	// printf("ent = %f\n", c->arg_f);
// 	c->str = ft_strjoin_free(ent, dec, ft_strlen(dec));
// 	free(dec);
// 	// printf("c->str = %s\n", c->str);
// 	return (1);
// }

int		ft_flt_conv_str(t_conv *c)
{
	ft_ll_tp_conv_str(c);
	// if (ft_strncmp((*c)->sz_tp, "L", 2) == 0)
	// 	ft_tp_conv_str(c, (short)(*c)->arg);
	return (1);
}