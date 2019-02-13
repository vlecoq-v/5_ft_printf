/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:13:12 by morgani           #+#    #+#             */
/*   Updated: 2019/02/13 19:42:18 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_conv *c)
{
	// printf("\nFT_PRINT_STR || CE QUI SERA PRINT  %c: \n\n", c->tp);
	ft_prt_strct(c);
	if (c->tp == 'c' || TP_MC)
		ft_print_tp_c(c);
	if ((c->tp == 's') || c->tp == '%' || c->tp == '!') // PROBLEM HIER SOIR BIERE condition pou s c>prc_sz != 0
		ft_print_tp_s(c);
	if (c->tp == 'd' || c->tp == 'u' || c->tp == 'x'
		|| c->tp == 'X' || c->tp == 'o' || c->tp == 'p' || c->tp == 'b' || c->tp == 'f')
		ft_print_tp_d(c);
}
