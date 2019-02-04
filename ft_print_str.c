/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:13:12 by morgani           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/01/23 13:53:19 by vlecoq-v         ###   ########.fr       */
=======
/*   Updated: 2019/01/25 09:46:05 by morgani          ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_conv *c)
{
	// printf("\nFT_PRINT_STR || CE QUI SERA PRINT : \n\n");
	if (c->tp == 's' || c->tp == '%' || (c->tp == 'c' && (int)c->arg == 0)
		|| c->tp == '!')
		ft_print_tp_s(c);
	else if (c->tp == 'c')
		ft_print_tp_c(c);
	if (c->tp == 'd' || c->tp == 'u' || c->tp == 'x'
		|| c->tp == 'X' || c->tp == 'o' || c->tp == 'p')
		ft_print_tp_d(c);
}
