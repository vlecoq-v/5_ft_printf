/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:58:02 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/11 15:32:59 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h> //printf
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
}					t_conv;

int		ft_printf(const char *format, ...);
int		ft_int(const char *format, va_list args, int i);
int		ft_check(const char *format, va_list args, int i);
int		ft_size_conv(t_conv **conv);

#endif

