/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:13:12 by morgani           #+#    #+#             */
/*   Updated: 2019/01/17 15:51:21 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_conv *c)
{
	// printf("\nFT_PRINT_STR || CE QUI SERA PRINT : \n\n");
	if (c->tp == 's')
		ft_print_tp_s(c);
	if (c->tp == 'c')
		ft_print_tp_c(c);
	if (c->tp == 'd' || c->tp == 'p' || c->tp == 'u' || c->tp == 'x'
		|| c->tp == 'X')
		ft_print_tp_d(c);
}
