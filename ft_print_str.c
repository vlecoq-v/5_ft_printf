/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:13:12 by morgani           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/01/17 12:04:30 by vlecoq-v         ###   ########.fr       */
=======
/*   Updated: 2019/01/17 16:46:03 by vlecoq-v         ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_conv *c)
{
	printf("\nFT_PRINT_STR || CE QUI SERA PRINT : \n\n");
	if (c->tp == 's')
		ft_print_tp_s(c);
	if (c->tp == 'c')
		ft_print_tp_c(c);
<<<<<<< HEAD
	if (c->tp == 'x')
		ft_print_tp_p(c);

	// if (c->tp == 'd')
	// 	ft_print_tp_d(c);
=======
	if (c->tp == 'd' || c->tp == 'u' || c->tp == 'x'
		|| c->tp == 'X' || c->tp == 'o')
		ft_print_tp_d(c);
	if (c->tp == 'p')
		ft_print_tp_p(c);
>>>>>>> master
}
