/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/16 18:55:52 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas %d mais bien %d ZBOUB\n"

int	main(void)
{
	printf("1chiffre 1 |%d| chiffre 2 |%d|\n", 42, -42);
	ft_printf("1chiffre 1 |%d| chiffre 2 |%d|\n\n", 42, -42);
	// printf("2chiffre 1 |%   d| chiffre 2 |% d|\n", 42, -42);
	// ft_printf("2chiffre 1 |%   d| chiffre 2 |% d|\n\n", 42, -42);
	// printf("3chiffre 1 |%12d| chiffre 2 |%12d|\n", 42, -42);
	// ft_printf("3chiffre 1 |%12d| chiffre 2 |%12d|\n\n", 42, -42);
	// printf("4chiffre 1 |%-12d| chiffre 2 |%-12d|\n", 42, -42);
	// ft_printf("4chiffre 1 |%-12d| chiffre 2 |%-12d|\n\n", 42, -42);
	// printf("5chiffre 1 |%0d| chiffre 2 |%0d|\n", 42, -42);
	// ft_printf("5chiffre 1 |%0d| chiffre 2 |%0d|\n\n", 42, -42);
	// printf("6chiffre 1 |%012d| chiffre 2 |%012d|\n", 42, -42);
	// ft_printf("6chiffre 1 |%012d| chiffre 2 |%012d|\n\n", 42, -42);
	// printf("7chiffre 1 |%-012d| chiffre 2 |%012d|\n", 42, -42);
	// ft_printf("7chiffre 1 |%-012d| chiffre 2 |%012d|\n\n", 42, -42);
	// printf("8chiffre 1 |%*d| chiffre 2 |%*d|\n", 42, 6, 6, 6);
	// ft_printf("8chiffre 1 |%*d| chiffre 2 |%*d|\n\n", 42, 6, 6, 6);
	// printf("9chiffre 1 |%+d| chiffre 2 |%+d|\n", 42, 6, -42, 6);
	// ft_printf("9chiffre 1 |%+d| chiffre 2 |%+d|\n\n", 42, 6, -42, 6);
	// printf("10chiffre 1 |%+12d| chiffre 2 |%+12d|\n", 42, 6, -42, 6);
	// ft_printf("10chiffre 1 |%+12d| chiffre 2 |%+12d|\n\n", 42, 6, -42, 6);
	// printf("11chiffre 1 |%*12d| chiffre 2 |%*12d\|n", 42, -6, 42, 6);
	// ft_printf("11chiffre 1 |%*12d| chiffre 2 |%*12d|\n\n", 42, -6, 42, 6);
	// printf("12chiffre 1 |%-+5d| chiffre 2 |%-+5d|\n", 42, -42);
	// ft_printf("12chiffre 1 |%-+5d| chiffre 2 |%-+5d|\n\n", 42, -42);
	// printf("13chiffre 1 |%-+05d| chiffre 2 |%-+05d|\n", 42, -42);
	// ft_printf("13chiffre 1 |%-+05d| chiffre 2 |%-+05d|\n\n", 42, -42);
	// printf("14chiffre 1 |%+-5d| chiffre 2 |%+-5d|\n", 42, -42);
	// ft_printf("14chiffre 1 |%+-5d| chiffre 2 |%+-5d|\n\n", 42, -42);
	// printf("15chiffre 1 |%.d| chiffre 2 |%.d|\n", 42, -42);
	// ft_printf("15chiffre 1 |%.d| chiffre 2 |%.d|\n\n", 42, -42);
	// printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|\n", 42, -42);
	// ft_printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|\n\n", 42, -42);

	return (0);
}
