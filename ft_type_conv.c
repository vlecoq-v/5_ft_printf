/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:28:33 by morgani           #+#    #+#             */
/*   Updated: 2019/01/10 11:47:48 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_type_conv(char s)
{
	return ((s == 'c' || s == 'C' || s == 'd' || s == 'i' || s == 'o' ||
				s == 'u' || s == 'x' || s == 'X' || s == 'e' || s == 'E' ||
				s == 'F' || s == 'g' || s == 'G' || s == 'a' || s == 'A' ||
				s == 'n' || s == 'p' || s == 's' || s == 'S' || s == 'Z') ?
			1 : 0);
}
