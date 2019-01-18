/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/17 15:54:19 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas %d mais bien %d ZBOUB\n"

int	main(void)
{

	printf("DDDDDDDDDDDDDDDDDDDDD\n");
	printf("<- %d\n", printf("1chiffre 1 |%p| chiffre 2 |%p|", 42, -42));
	ft_printf("<- %d\n", ft_printf("1chiffre 1 |%p| chiffre 2 |%p|", 42, -42));
	printf("<- %d\n", printf("2chiffre 1 |%   d| chiffre 2 |% d|", 42, -42));
	ft_printf("<- %d\n", ft_printf("2chiffre 1 |%   d| chiffre 2 |% d|", 42, -42));
	printf("<- %d\n", printf("3chiffre 1 |%12d| chiffre 2 |%12d|", 42, -42));
	ft_printf("<- %d\n", ft_printf("3chiffre 1 |%12d| chiffre 2 |%12d|", 42, -42));
	printf("<- %d\n", printf("4chiffre 1 |%-12d| chiffre 2 |%-12d|", 42, -42));
	ft_printf("<- %d\n", ft_printf("4chiffre 1 |%-12d| chiffre 2 |%-12d|", 42, -42));
	printf("<- %d\n", printf("5chiffre 1 |%0d| chiffre 2 |%0d|", 42, -42));
	ft_printf("<- %d\n", ft_printf("5chiffre 1 |%0d| chiffre 2 |%0d|", 42, -42));
	printf("<- %d\n", printf("6chiffre 1 |%012d| chiffre 2 |%012d|", 42, -42));
	ft_printf("<- %d\n", ft_printf("6chiffre 1 |%012d| chiffre 2 |%012d|", 42, -42));
	printf("<- %d\n", printf("7chiffre 1 |%-012d| chiffre 2 |%012d|", 42, -42));
	ft_printf("<- %d\n", ft_printf("7chiffre 1 |%-012d| chiffre 2 |%012d|", 42, -42));
	printf("<- %d\n", printf("8chiffre 1 |%*d| chiffre 2 |%*d|", 42, 6, 6, 6));
	ft_printf("<- %d\n", ft_printf("8chiffre 1 |%*d| chiffre 2 |%*d|", 42, 6, 6, 6));
	printf("<- %d\n", printf("9chiffre 1 |%+d| chiffre 2 |%+d|", 42, 6, -42, 6));
	ft_printf("<- %d\n", ft_printf("9chiffre 1 |%+d| chiffre 2 |%+d|", 42, 6, -42, 6));
	printf("<- %d\n", printf("10chiffre 1 |%+12d| chiffre 2 |%+12d|", 42, 6, -42, 6));
	ft_printf("<- %d\n", ft_printf("10chiffre 1 |%+12d| chiffre 2 |%+12d|", 42, 6, -42, 6));
	printf("<- %d\n", printf("11chiffre 1 |%*12d| chiffre 2 |%*12d|", 42, -6, 42, 6));
	ft_printf("<- %d\n", ft_printf("11chiffre 1 |%*12d| chiffre 2 |%*12d|", 42, -6, 42, 6));
	printf("<- %d\n", printf("12chiffre 1 |%-+5d| chiffre 2 |%-+5d|", 42, -42));
	ft_printf("<- %d\n", ft_printf("12chiffre 1 |%-+5d| chiffre 2 |%-+5d|", 42, -42));
	printf("<- %d\n", printf("13chiffre 1 |%-+05d| chiffre 2 |%-+05d|", 42, -42));
	ft_printf("<- %d\n", ft_printf("13chiffre 1 |%-+05d| chiffre 2 |%-+05d|", 42, -42));
	printf("<- %d\n", printf("14chiffre 1 |%+-5d| chiffre 2 |%+-5d|", 42, -42));
	ft_printf("<- %d\n", ft_printf("14chiffre 1 |%+-5d| chiffre 2 |%+-5d|", 42, -42));
	printf("<- %d\n", printf("15chiffre 1 |%.d| chiffre 2 |%.d|", 42, -42));
	ft_printf("<- %d\n", ft_printf("15chiffre 1 |%.d| chiffre 2 |%.d|", 42, -42));
	printf("<- %d\n", printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|", 42, -42));
	ft_printf("<- %d\n", ft_printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|", 42, -42));

	return (0);
}
