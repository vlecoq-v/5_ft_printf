/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:13:12 by morgani           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/01/18 17:38:14 by vlecoq-v         ###   ########.fr       */
=======
/*   Updated: 2019/01/21 15:45:42 by vlecoq-v         ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_conv *c)
{
	// printf("\nFT_PRINT_STR || CE QUI SERA PRINT : \n\n");
	if (c->tp == 's' || c->tp == '%' || c->tp == '!')
		ft_print_tp_s(c);
	if (c->tp == 'c')
		ft_print_tp_c(c);
	if (c->tp == 'd' || c->tp == 'u' || c->tp == 'x'
		|| c->tp == 'X' || c->tp == 'o' || c->tp == 'p')
		ft_print_tp_d(c);
}
