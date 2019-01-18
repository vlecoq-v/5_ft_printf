/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/18 15:19:11 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas |%d mais bien |%d ZBOUB\n"

int	main(void)
{

	// 	printf("SSSSSSSSSSSSSSSSSSSSS\n");
	// printf("<- %d\n", printf("1string 1 |%-.20s| string 2 |%-.20s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("1string 1 |%-.20s| string 2 |%-.20s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("2string 1 |%   s| string 2 |% s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("2string 1 |%   s| string 2 |% s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("3string 1 |%12s| string 2 |%12s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("3string 1 |%12s| string 2 |%12s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("4string 1 |%-12s| string 2 |%-12s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("4string 1 |%-12s| string 2 |%-12s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("5string 1 |%0s| string 2 |%0s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("5string 1 |%0s| string 2 |%0s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("6string 1 |%012s| string 2 |%012s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("6string 1 |%012s| string 2 |%012s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("7string 1 |%-012s| string 2 |%012s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("7string 1 |%-012s| string 2 |%012s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("12string 1 |%-+5s| string 2 |%-+5s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("12string 1 |%-+5s| string 2 |%-+5s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("13string 1 |%-+05s| string 2 |%-+05s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("13string 1 |%-+05s| string 2 |%-+05s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("14string 1 |%+-5s| string 2 |%+-5s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("14string 1 |%+-5s| string 2 |%+-5s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("15string 1 |%.s| string 2 |%.s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("15string 1 |%.s| string 2 |%.s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("16string 1 |%.6s| string 2 |%.6s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("16string 1 |%.6s| string 2 |%.6s|", "toto", "bonjour"));

	// 	printf("DDDDDDDDDDDDDDDDDDDDD\n");
	// printf("<- %d\n", printf("   1chiffre 1 |% 40d| chiffre 2 |% 40d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---1chiffre 1 |% 40d| chiffre 2 |% 40d|", 42, -42));
	// printf("<- %d\n", printf("   1chiffre 1 |%-5.1d| chiffre 2 |%-5.1d|", 421234, -421234));
	// ft_printf("<- %d\n", ft_printf("---1chiffre 1 |%-5.1d| chiffre 2 |%-5.1d|", 421234, -421234));
	// printf("<- %d\n", printf("   1chiffre 1 |%-5.1d| chiffre 2 |%-5.1d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---1chiffre 1 |%-5.1d| chiffre 2 |%-5.1d|", 42, -42));
	// printf("<- %d\n", printf("   1chiffre 1 |%5.1d| chiffre 2 |%5.1d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---1chiffre 1 |%5.1d| chiffre 2 |%5.1d|", 42, -42));
	// printf("<- %d\n", printf("   1chiffre 1 |%-10d| chiffre 2 |%-10d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---1chiffre 1 |%-10d| chiffre 2 |%-10d|", 42, -42));
	// printf("<- %d\n", printf("   2chiffre 1 |%   5d| chiffre 2 |%   5d|", 42123, -42));
	// ft_printf("<- %d\n", ft_printf("---2chiffre 1 |%   5d| chiffre 2 |%   5d|", 42123, -42));
	// printf("<- %d\n", printf("   2chiffre 1 |%   1d| chiffre 2 |%   1d|", 42123, -42));
	// ft_printf("<- %d\n", ft_printf("---2chiffre 1 |%   1d| chiffre 2 |%   1d|", 42123, -42));
	// printf("<- %d\n", printf("   3chiffre 1 |%12d| chiffre 2 |%12d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---3chiffre 1 |%12d| chiffre 2 |%12d|", 42, -42));
	// printf("<- %d\n", printf("   4chiffre 1 |%-12d| chiffre 2 |%-12d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---4chiffre 1 |%-12d| chiffre 2 |%-12d|", 42, -42));
	// printf("<- %d\n", printf("   5chiffre 1 |%0d| chiffre 2 |%0d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---5chiffre 1 |%0d| chiffre 2 |%0d|", 42, -42));
	// printf("<- %d\n", printf("   6chiffre 1 |%012d| chiffre 2 |%012d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---6chiffre 1 |%012d| chiffre 2 |%012d|", 42, -42));
	// printf("<- %d\n", printf("   6.2chiffre 1 |%29.28d| chiffre 2 |%29.28d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---6.2chiffre 1 |%29.28d| chiffre 2 |%29.28d|", 42, -42));
	// printf("<- %d\n", printf("   7chiffre 1 |%-012d| chiffre 2 |%012d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---7chiffre 1 |%-012d| chiffre 2 |%012d|", 42, -42));
	// printf("<- %d\n", printf("   7chiffre 1 |%-+012d| chiffre 2 |%+012d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---7chiffre 1 |%-+012d| chiffre 2 |%0+12d|", 42, -42));
	// printf("<- %d\n", printf("   8chiffre 1 |%*d| chiffre 2 |%*d|", 42, 6, 6, 6));
	// ft_printf("<- %d\n", ft_printf("---8chiffre 1 |%*d| chiffre 2 |%*d|", 42, 6, 6, 6));
	// printf("<- %d\n", printf("   9chiffre 1 |%+d| chiffre 2 |%+d|", 42, 6, -42, 6));
	// ft_printf("<- %d\n", ft_printf("---9chiffre 1 |%+d| chiffre 2 |%+d|", 42, 6, -42, 6));
	// printf("<- %d\n", printf("   10chiffre 1 |%+12d| chiffre 2 |%+12d|", 42, 6, -42, 6));
	// ft_printf("<- %d\n", ft_printf("---10chiffre 1 |%+12d| chiffre 2 |%+12d|", 42, 6, -42, 6));
	// printf("<- %d\n", printf("   11chiffre 1 |%*12d| chiffre 2 |%*12d|", 42, -6, -42, 6));
	// ft_printf("<- %d\n", ft_printf("---11chiffre 1 |%*12d| chiffre 2 |%*12d|", 42, -6, -42, 6));
	// printf("<- %d\n", printf("   12chiffre 1 |%-+5d| chiffre 2 |%-+5d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---12chiffre 1 |%-+5d| chiffre 2 |%-+5d|", 42, -42));
	// printf("<- %d\n", printf("   13chiffre 1 |%-+05d| chiffre 2 |%-+05d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---13chiffre 1 |%-+05d| chiffre 2 |%-+05d|", 42, -42));
	// printf("<- %d\n", printf("   14chiffre 1 |%+-5d| chiffre 2 |%+-5d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---14chiffre 1 |%+-5d| chiffre 2 |%+-5d|", 42, -42));
	// printf("<- %d\n", printf("   15chiffre 1 |%.d| chiffre 2 |%.d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---15chiffre 1 |%.d| chiffre 2 |%.d|", 42, -42));
	// printf("<- %d\n", printf("   16chiffre 1 |%.6d| chiffre 2 |%.6d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("---16chiffre 1 |%.6d| chiffre 2 |%.6d|", 42, -42));


	printf("OOOOOOOOOOo\n");
	ft_printf("<-%d\n",ft_printf("     1octal 1 |%o| octal 2 |%o|", 42, -42));
	printf("<-%d\n", printf("prtf 1octal 1 |%o| octal 2 |%o|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     2octal 1 |%   o| octal 2 |% o|", 42, -42));
	printf("<-%d\n", printf("prtf 2octal 1 |%   o| octal 2 |% o|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     2octal 1 |%   d| octal 2 |% d|", 42, -42));
	printf("<-%d\n", printf("prtf 2octal 1 |%   d| octal 2 |% d|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     3octal 1 |%12o| octal 2 |%12o|", 42, -42));
	printf("<-%d\n", printf("prtf 3octal 1 |%12o| octal 2 |%12o|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     4octal 1 |%-12o| octal 2 |%-12o|", 42, -42));
	printf("<-%d\n", printf("prtf 4octal 1 |%-12o| octal 2 |%-12o|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     5octal 1 |%0o| octal 2 |%0o|", 42, -42));
	printf("<-%d\n", printf("prtf 5octal 1 |%0o| octal 2 |%0o|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     6octal 1 |%012o| octal 2 |%012o|", 42, -42));
	printf("<-%d\n", printf("prtf 6octal 1 |%012o| octal 2 |%012o|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     7octal 1 |%-012o| octal 2 |%012o|", 42, -42));
	printf("<-%d\n", printf("prtf 7octal 1 |%-012o| octal 2 |%012o|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     8octal 1 |%*o| octal 2 |%*o|", 42, 6, 6, 6));
	printf("<-%d\n", printf("prtf 8octal 1 |%*o| octal 2 |%*o|", 42, 6, 6, 6));
	ft_printf("<-%d\n",ft_printf("     9octal 1 |%+o| octal 2 |%+o|", 42, 6, -42, 6));
	printf("<-%d\n", printf("prtf 9octal 1 |%+o| octal 2 |%+o|", 42, 6, -42, 6));
	ft_printf("<-%d\n",ft_printf("     10octal 1 |%+12o| octal 2 |%+12o|", 42, 6, -42, 6));
	printf("<-%d\n", printf("prtf 10octal 1 |%+12o| octal 2 |%+12o|", 42, 6, -42, 6));
	ft_printf("<-%d\n",ft_printf("     11octal 1 |%*12o| octal 2 |%*12o|", 42, -6, 42, 6));
	printf("<-%d\n", printf("prtf 11octal 1 |%*12o| octal 2 |%*12o|", 42, -6, 42, 6));
	ft_printf("<-%d\n",ft_printf("     12octal 1 |%-+5o| octal 2 |%-+5o|", 42, -42));
	printf("<-%d\n", printf("prtf 12octal 1 |%-+5o| octal 2 |%-+5o|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     13octal 1 |%-+05o| octal 2 |%-+05o|", 42, -42));
	printf("<-%d\n", printf("prtf 13octal 1 |%-+05o| octal 2 |%-+05o|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     14octal 1 |%+-5o| octal 2 |%+-5o|", 42, -42));
	printf("<-%d\n", printf("prtf 14octal 1 |%+-5o| octal 2 |%+-5o|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     15octal 1 |%.o| octal 2 |%.o|", 42, -42));
	printf("<-%d\n", printf("prtf 15octal 1 |%.o| octal 2 |%.o|", 42, -42));
	ft_printf("<-%d\n",ft_printf("     16octal 1 |%.6o| octal 2 |%.6o|", 42, -42));
	printf("<-%d\n", printf("prtf 16octal 1 |%.6o| octal 2 |%.6o|", 42, -42));

	return (0);
}
