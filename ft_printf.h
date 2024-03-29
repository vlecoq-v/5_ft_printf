/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:58:02 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/03/04 14:47:10 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

# define BUFF_SZ 100

# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define WHT   "\x1B[37m"
# define RESET "\x1B[0m"

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
	char			buff[BUFF_SZ];
	int				ind;
	unsigned int	flg;
	t_flg			flg_tp;
	int				wdth;
	int				prc;
	int				prc_sz;
	int				sz;
	char			sz_tp[3];
	char			tp;
	void			*arg;
	double			arg_f;
	long double		arg_lf;
	int				sn;
	char			*str;
	int				str_l;
	long long		nbr;
	int				cmpt;
	int				prt_spc;
	int				len_flg;
}					t_conv;

int					ft_printf(const char *format, ...);
int					ft_size_conv(t_conv *c);
int					ft_conv_to_str(t_conv *c, va_list args);
char				*ft_itoa_b(long long value, int base, t_conv *c, int neg);
char				*ft_itoa_b_u(unsigned long long value, int base, char cap);
int					ft_printf(const char *format, ...);
int					ft_int(const char *format, va_list args, int i);
int					ft_check(const char *format, va_list args, int i);
int					ft_fill_flag(t_conv *c, const char *format, int *i);
int					ft_fill_struct(t_conv *c, const char *format, int *i,
					va_list args);
int					ft_check_flag(char c);
int					ft_print_conv(const char *format, int *i, va_list args,
					t_conv *c);
int					ft_fill_width(t_conv *c, const char *format, int *i,
					va_list args);
int					ft_fill_prec(t_conv *c, const char *format, int *i,
					va_list args);
int					ft_check_flag_size(char c);
int					ft_fill_size(t_conv *c, const char *format, int *i);
int					ft_fill_type(t_conv *c, const char *format, int *i);
int					ft_check_type(char c);
int					ft_fill_arg(t_conv *c, va_list args);
void				ft_print_str(t_conv *c);
void				ft_print_tp_s(t_conv *c);
void				ft_print_tp_c(t_conv *c);
void				ft_print_tp_d(t_conv *c);
void				ft_print_tp_p(t_conv *c);
void				ft_fill_prt_spc(t_conv *c);
void				ft_prt_spc(t_conv *c);
void				ft_reset_buff(t_conv *c);
int					ft_add_to_buff(t_conv *c, char *s);
void				ft_putbuff(t_conv *c, char *s);
void				ft_print_flg(t_conv *c);
int					ft_flt_conv_str(t_conv *c, va_list args);

#endif
