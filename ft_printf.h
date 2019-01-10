/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:58:02 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/09 18:27:55 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h> //printf
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct		s_conv
{
	char			flg;
	unsigned int	wdth;
	unsigned int	prc;
	char			sz[3];
	char			tp;
	char			*arg;
}					t_conv;

int		ft_printf(const char *format, ...);
int		ft_int(const char *format, va_list args, int i);
int		ft_check(const char *format, va_list args, int i);

#endif

