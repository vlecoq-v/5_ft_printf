/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:20:30 by morgani           #+#    #+#             */
/*   Updated: 2019/01/16 17:02:22 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_conv(const char *format, int *i, va_list args)
{
	t_conv	*c;

	c = (t_conv*)malloc(sizeof(t_conv));
	// printf("FT_PRINT_CONV || format[%d] (%c)\n", *i, format[*i]);
	if (!ft_fill_struct(c, format, i, args))
	{
		// printf("FT_PRINT_CONV || ERROR FCK_PRINT_CONV FILL_STRUCT\n");
		return (0);
	}
	// printf("ENCORE ====> FT_FILL_STRUCT || ARG ? %d\n", c->arg);
	ft_conv_to_str(c);
	ft_fill_prt_spc(c);
	ft_print_str(c);
	return (1);
}
