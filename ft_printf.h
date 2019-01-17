/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:58:02 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/17 08:48:08 by morgani          ###   ########.fr       */
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
	unsigned int	flg;
	t_flg			flg_tp;
	unsigned int	wdth;
	unsigned int	prc;
	unsigned int	prc_sz;
	unsigned int	sz;
	char			sz_tp[3];
	char			tp;
	void			*arg;
	int				sn;
	char			*str;
	long long		nbr;
	int				prt_spc;
}					t_conv;

int					ft_printf(const char *format, ...);
int					ft_int(const char *format, va_list args, int i);
int					ft_check(const char *format, va_list args, int i);
int					ft_size_conv(t_conv **conv);
int					ft_conv_to_str(t_conv *conv);
char				*ft_itoa_b(long long value, int base);
char				*ft_itoa_b_u(unsigned long long value, int base, char cap);
int					ft_printf(const char *format, ...);
int					ft_int(const char *format, va_list args, int i);
int					ft_check(const char *format, va_list args, int i);
void				ft_fill_flag(t_conv *c, const char *format, int *i);
int					ft_fill_struct(t_conv *c, const char *format, int *i,
					va_list args);
int					ft_check_flag(char c);
int					ft_print_conv(const char *format, int *i, va_list args);
void				ft_fill_width(t_conv *c, const char *format, int *i,
					va_list args);
void				ft_fill_prec(t_conv *c, const char *format, int *i,
					va_list args);
int					ft_check_flag_size(char c);
void				ft_fill_size(t_conv *c, const char *format, int *i);
void				ft_fill_type(t_conv *c, const char *format, int *i);
int					ft_check_type(char c);
void				ft_fill_arg(t_conv *c, va_list args);
void				ft_print_str(t_conv *c);
void				ft_print_tp_s(t_conv *c);
void				ft_print_tp_c(t_conv *c);
void				ft_print_tp_d(t_conv *c);
void				ft_fill_prt_spc(t_conv *c);
void				ft_prt_spc(t_conv *c);

#endif
