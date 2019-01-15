/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:58:02 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/15 14:55:56 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h> //printf
#include <limits.h> //contient LLONG_MIN qui evite un warning chiant et simplifie la lecture
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct		s_flg
{
	int				mns;
	int				pls;
	int				zr;
	int				spc;
	int				hstg;
}					t_flg;

typedef struct		s_conv
{
	t_flg			flg;
	unsigned int	wdth;
	unsigned int	prc;
	char			sz[3];
	char			tp;
	void			*arg;
	int				sn;
	char			*str;
}					t_conv;

int		ft_printf(const char *format, ...);
int		ft_int(const char *format, va_list args, int i);
int		ft_check(const char *format, va_list args, int i);
int		ft_size_conv(t_conv **conv);
int		ft_conv_to_str(t_conv *conv);
char	*ft_itoa_b(long long value, int base);
char	*ft_itoa_b_u(unsigned long long value, int base, char cap);


#endif

