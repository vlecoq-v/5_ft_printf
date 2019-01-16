/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:13:12 by morgani           #+#    #+#             */
/*   Updated: 2019/01/16 11:16:37 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(t_conv *c)
{
	// printf("\nFT_PRINT_STR || CE QUI SERA PRINT : \n\n");
	if (c->tp == 's')
		ft_print_tp_s(c);
	// if (c->tp == 'd')
	// 	ft_print_tp_d(c);
}
