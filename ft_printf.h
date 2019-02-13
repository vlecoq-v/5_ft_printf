/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:58:02 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/13 15:23:52 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>		// A SUUPRIMER
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

# define BUFF_SZ 2
# define TP_B c->tp == 'b'
# define TP_C c->tp == 'c'
# define TP_MC c->tp == 'C'
# define TP_D c->tp == 'd'
# define TP_I c->tp == 'i'
# define TP_O c->tp == 'o'
# define TP_MO c->tp == 'O'
# define TP_U c->tp == 'u'
# define TP_X c->tp == 'x'
# define TP_MX c->tp == 'X'
# define TP_E c->tp == 'e'
# define TP_ME c->tp == 'E'
# define TP_F c->tp == 'f'
# define TP_MF c->tp == 'F'
# define TP_G c->tp == 'g'
# define TP_MG c->tp == 'G'
# define TP_A c->tp == 'a'
# define TP_MA c->tp == 'A'
# define TP_N c->tp == 'n'
# define TP_P c->tp == 'p'
# define TP_S c->tp == 's'
# define TP_MS c->tp == 'S'
# define TP_MZ c->tp == 'Z'
# define TP_PRCT c->tp == '%'
# define PRC c->prc
# define TP c->tp
# define PRC_SZ c->prc_sz
# define STR_L c->str_l
# define ZR c->flg_tp.zr
# define MNS c->flg_tp.mns
# define PLS c->flg_tp.pls
# define HSTG c->flg_tp.hstg
# define SPC c->flg_tp.spc
# define WDTH c->wdth
# define SN c->sn
# define LL_CARG (long long)c->arg
# define L_FLG c->len_flg

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
void				ft_prt_strct(t_conv *c);
int					ft_flt_conv_str(t_conv *c, va_list args);

#endif
