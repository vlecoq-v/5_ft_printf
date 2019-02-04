/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:20:30 by morgani           #+#    #+#             */
/*   Updated: 2019/01/24 14:19:36 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_conv(const char *format, int *i, va_list args, t_conv *c)
{
	// printf("FT_PRINT_CONV || format[%d] (%c)\n", *i, format[*i]);
	if (!ft_fill_struct(c, format, i, args))
	{
		// printf("FT_PRINT_CONV || ERROR FCK_PRINT_CONV FILL_STRUCT\n");
		return (0);
	}
	// printf("PRINT CONV ====> FT_FILL_STRUCT || ARG ? %d\n", (int)c->arg);
	if (!ft_conv_to_str(c))
		return (0);
	// printf("PRINT CONV ====> FT_CONV_TO_STR || ARG ? %s\n", c->str);
	ft_fill_prt_spc(c);
	// write(1, "fps ok", 7);
	// printf("PRINT CONV ====> FT_FILL_PRT_SPC || ARG ? %s\n", c->str);
	ft_prt_strct(c);
	ft_print_str(c);
	// ft_strdel(&c->str);
	// free(&c);
	return (1);
}
