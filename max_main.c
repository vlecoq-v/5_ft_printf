/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/17 11:55:56 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas %d mais bien %d ZBOUB\n"

int	main(void)
{
	printf("CCCCCCCCCCCCCCCCCC\n");
	printf("1caractere 1 |%c| caractere 2 |%c|\n", 'a', 'c');
	ft_printf("1caractere 1 |%c| caractere 2 |%c|\n\n", 'a', 'c');
	printf("2caractere 1 |%   c| caractere 2 |% c|\n", 'a', 'c');
	ft_printf("3caractere 1 |%   c| caractere 2 |% c|\n\n", 'a', 'c');
	printf("4caractere 1 |%12c| caractere 2 |%12c|\n", 'a', 'c');
	ft_printf("4caractere 1 |%12c| caractere 2 |%12c|\n\n", 'a', 'c');
	printf("4caractere 1 |%-12c| caractere 2 |%-12c|\n", 'a', 'c');
	ft_printf("4caractere 1 |%-12c| caractere 2 |%-12c|\n\n", 'a', 'c');
	printf("5caractere 1 |%0c| caractere 2 |%0c|\n", 'a', 'c');
	ft_printf("5caractere 1 |%0c| caractere 2 |%0c|\n\n", 'a', 'c');
	printf("6caractere 1 |%012c| caractere 2 |%012c|\n", 'a', 'c');
	ft_printf("6caractere 1 |%012c| caractere 2 |%012c|\n\n", 'a', 'c');
	printf("7caractere 1 |%-012c| caractere 2 |%012c|\n", 'a', '|c');
	ft_printf("7caractere 1 |%-012c| caractere 2 |%012c|\n\n", 'a', 'c');
	printf("8caractere 1 |%*c| caractere 2 |%*c|\n", 'a', 6, 6, 6);
	ft_printf("8caractere 1 |%*c| caractere 2 |%*c|\n\n", 'a', 6, 6, 6);
	printf("9caractere 1 |%+c| caractere 2 |%+c|\n", 'a', 6, 'c', 6);
	ft_printf("9caractere 1 |%+c| caractere 2 |%+c|\n\n", 'a', 6, 'c', 6);
	printf("10caractere 1 |%+12c| caractere 2 |%+12c|\n", 'a', 6, 'c', 6);
	ft_printf("10caractere 1 |%+12c| caractere 2 |%+12c|\n\n", 'a', 6, 'c', 6);
	printf("11caractere 1 |%*12c| caractere 2 |%*12c|\n", 'a', -6, 'a', 6);
	ft_printf("11caractere 1 |%*12c| caractere 2 |%*12c|\n\n", 'a', -6, 'a', 6);
	printf("12caractere 1 |%-+5c| caractere 2 |%-+5c|\n", 'a', 'c');
	ft_printf("12caractere 1 |%-+5c| caractere 2 |%-+5c|\n\n", 'a', 'c');
	printf("13caractere 1 |%-+05c| caractere 2 |%-+05c|\n", 'a', 'c');
	ft_printf("13caractere 1 |%-+05c| caractere 2 |%-+05c|\n\n", 'a', 'c');
	printf("14caractere 1 |%+-5c| caractere 2 |%+-5c|\n", 'a', 'c');
	ft_printf("14caractere 1 |%+-5c| caractere 2 |%+-5c|\n\n", 'a', 'c');
	printf("15caractere 1 |%.c| caractere 2 |%.c|\n", 'a', 'c');
	ft_printf("15caractere 1 |%.c| caractere 2 |%.c|\n\n", 'a', 'c');
	printf("16caractere 1 |%.6c| caractere 2 |%.6c|\n", 'a', 'c');
	ft_printf("16caractere 1 |%.6c| caractere 2 |%.6c|\n\n", 'a', 'c');

	printf("SSSSSSSSSSSSSSSSSSSSS\n");
	printf("1string 1 |%s| string 2 |%s|\n", "toto", "bonjour");
	ft_printf("1string 1 |%s| string 2 |%s|\n\n", "toto", "bonjour");
	printf("2string 1 |%   s| string 2 |% s|\n", "toto", "bonjour");
	ft_printf("2string 1 |%   s| string 2 |% s|\n\n", "toto", "bonjour");
	printf("3string 1 |%12s| string 2 |%12s|\n", "toto", "bonjour");
	ft_printf("3string 1 |%12s| string 2 |%12s|\n\n", "toto", "bonjour");
	printf("4string 1 |%-12s| string 2 |%-12s|\n", "toto", "bonjour");
	ft_printf("4string 1 |%-12s| string 2 |%-12s|\n\n", "toto", "bonjour");
	printf("5string 1 |%0s| string 2 |%0s|\n", "toto", "bonjour");
	ft_printf("5string 1 |%0s| string 2 |%0s|\n\n", "toto", "bonjour");
	printf("6string 1 |%012s| string 2 |%012s|\n", "toto", "bonjour");
	ft_printf("6string 1 |%012s| string 2 |%012s|\n\n", "toto", "bonjour");
	printf("7string 1 |%-012s| string 2 |%012s|\n", "toto", "bonjour");
	ft_printf("7string 1 |%-012s| string 2 |%012s|\n\n", "toto", "bonjour");
	// printf("8string 1 |%*s| string 2 |%*s|\n", "toto", 6, "tata", 6);
	// ft_printf("8string 1 |%*s| string 2 |%*s|\n\n", "toto", 6, "tata", 6);
	// printf("9string 1 |%+s| string 2 |%+s|\n", "toto", 6, "bonjour", 6);
	// ft_printf("9string 1 |%+s| string 2 |%+s|\n\n", "toto", 6, "bonjour", 6);
	// printf("10string 1 |%+12s| string 2 |%+12s|\n", "toto", 6, "bonjour", 6);
	// ft_printf("10string 1 |%+12s| string 2 |%+12s|\n\n", "toto", 6, "bonjour", 6);
	// printf("11string 1 |%*12s| string 2 |%*12s|\n", "toto", -6, "bonjour", 6);
	// ft_printf("11string 1 |%*12s| string 2 |%*12s|\n\n", "toto", -6, "bonjour", 6);
	printf("12string 1 |%-+5s| string 2 |%-+5s|\n", "toto", "bonjour");
	ft_printf("12string 1 |%-+5s| string 2 |%-+5s|\n\n", "toto", "bonjour");
	printf("13string 1 |%-+05s| string 2 |%-+05s|\n", "toto", "bonjour");
	ft_printf("13string 1 |%-+05s| string 2 |%-+05s|\n\n", "toto", "bonjour");
	printf("14string 1 |%+-5s| string 2 |%+-5s|\n", "toto", "bonjour");
	ft_printf("14string 1 |%+-5s| string 2 |%+-5s|\n\n", "toto", "bonjour");
	printf("15string 1 |%.s| string 2 |%.s|\n", "toto", "bonjour");
	ft_printf("15string 1 |%.s| string 2 |%.s|\n\n", "toto", "bonjour");
	printf("16string 1 |%.6s| string 2 |%.6s|\n", "toto", "bonjour");
	ft_printf("16string 1 |%.6s| string 2 |%.6s|\n\n", "toto", "bonjour");

	printf("DDDDDDDDDDDDDDDDDDDDD\n");
	printf("1chiffre 1 |%d| chiffre 2 |%d|\n", 42, -42);
	ft_printf("1chiffre 1 |%d| chiffre 2 |%d|\n\n", 42, -42);
	printf("2chiffre 1 |%   d| chiffre 2 |% d|\n", 42, -42);
	ft_printf("2chiffre 1 |%   d| chiffre 2 |% d|\n\n", 42, -42);
	printf("3chiffre 1 |%12d| chiffre 2 |%12d|\n", 42, -42);
	ft_printf("3chiffre 1 |%12d| chiffre 2 |%12d|\n\n", 42, -42);
	printf("4chiffre 1 |%-12d| chiffre 2 |%-12d|\n", 42, -42);
	ft_printf("4chiffre 1 |%-12d| chiffre 2 |%-12d|\n\n", 42, -42);
	printf("5chiffre 1 |%0d| chiffre 2 |%0d|\n", 42, -42);
	ft_printf("5chiffre 1 |%0d| chiffre 2 |%0d|\n\n", 42, -42);
	printf("6chiffre 1 |%012d| chiffre 2 |%012d|\n", 42, -42);
	ft_printf("6chiffre 1 |%012d| chiffre 2 |%012d|\n\n", 42, -42);
	printf("7chiffre 1 |%-012d| chiffre 2 |%012d|\n", 42, -42);
	ft_printf("7chiffre 1 |%-012d| chiffre 2 |%012d|\n\n", 42, -42);
	printf("8chiffre 1 |%*d| chiffre 2 |%*d|\n", 42, 6, 6, 6);
	ft_printf("8chiffre 1 |%*d| chiffre 2 |%*d|\n\n", 42, 6, 6, 6);
	printf("9chiffre 1 |%+d| chiffre 2 |%+d|\n", 42, 6, -42, 6);
	ft_printf("9chiffre 1 |%+d| chiffre 2 |%+d|\n\n", 42, 6, -42, 6);
	printf("10chiffre 1 |%+12d| chiffre 2 |%+12d|\n", 42, 6, -42, 6);
	ft_printf("10chiffre 1 |%+12d| chiffre 2 |%+12d|\n\n", 42, 6, -42, 6);
	printf("11chiffre 1 |%*12d| chiffre 2 |%*12d|\n", 42, -6, 42, 6);
	ft_printf("11chiffre 1 |%*12d| chiffre 2 |%*12d|\n\n", 42, -6, 42, 6);
	printf("12chiffre 1 |%-+5d| chiffre 2 |%-+5d|\n", 42, -42);
	ft_printf("12chiffre 1 |%-+5d| chiffre 2 |%-+5d|\n\n", 42, -42);
	printf("13chiffre 1 |%-+05d| chiffre 2 |%-+05d|\n", 42, -42);
	ft_printf("13chiffre 1 |%-+05d| chiffre 2 |%-+05d|\n\n", 42, -42);
	printf("14chiffre 1 |%+-5d| chiffre 2 |%+-5d|\n", 42, -42);
	ft_printf("14chiffre 1 |%+-5d| chiffre 2 |%+-5d|\n\n", 42, -42);
	printf("15chiffre 1 |%.d| chiffre 2 |%.d|\n", 42, -42);
	ft_printf("15chiffre 1 |%.d| chiffre 2 |%.d|\n\n", 42, -42);
	printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|\n", 42, -42);
	ft_printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|\n\n", 42, -42);

	return (0);
}
