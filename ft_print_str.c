/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:13:12 by morgani           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/02/08 14:36:52 by vlecoq-v         ###   ########.fr       */
=======
/*   Updated: 2019/02/08 19:05:24 by morgani          ###   ########.fr       */
>>>>>>> max2
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_conv *c)
{
	// printf("\nFT_PRINT_STR || CE QUI SERA PRINT  %c: \n\n", c->tp);
	if (c->tp == 'c')
		ft_print_tp_c(c);
<<<<<<< HEAD
	if (c->tp == 'd' || c->tp == 'u' || c->tp == 'x' || c->tp == 'f'
		|| c->tp == 'X' || c->tp == 'o' || c->tp == 'p' || c->tp == 'b')
=======
	if (c->tp == 's' || c->tp == '%' || c->tp == '!')
		ft_print_tp_s(c);
	if (c->tp == 'd' || c->tp == 'u' || c->tp == 'x'
		|| c->tp == 'X' || c->tp == 'o' || c->tp == 'p')
>>>>>>> max2
		ft_print_tp_d(c);
}
