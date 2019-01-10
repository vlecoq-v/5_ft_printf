/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:58:02 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/10 11:27:14 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h> //printf
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct		s_flg
{
	char			-;
	char			+;
	char			zr;
	char			spc;
	char			#;
}					t_flg;

typedef struct		s_conv
{
	t_flg			flg;
	unsigned int	wdth;
	unsigned int	prc;
	char[3]			sz;
	char			tp;
	void			*arg;
}					t_conv;

int		ft_printf(const char *format, ...);
int		ft_int(const char *format, va_list args, int i);
int		ft_check(const char *format, va_list args, int i);

#endif

