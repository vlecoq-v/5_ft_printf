/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/16 17:34:56 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas %d mais bien %d ZBOUB\n"

int	main(int argc, char **argv)
{
 	printf("  1|%20s|\n", "bonjour");
	ft_printf(" -1|%20s|\n", "bonjour");
	printf("  2|%-20s|\n", "bonjour");
	ft_printf(" -2|%-20s|\n", "bonjour");
	printf("  3|%-20.0s|\n", "bonjour");
	ft_printf(" -3|%-20.0s|\n", "bonjour");
	printf("  4|%-20.5s|\n", "bonjour");
	ft_printf(" -4|%-20.5s|\n", "bonjour");
	printf("  5|%-5s|\n", "bonjour");
	ft_printf(" -5|%-5s|\n", "bonjour");
	printf("  6|%-.15s|\n", "bonjour");
	ft_printf(" -6|%-.15s|\n", "bonjour");
	printf("  7|%-5.2s|\n", "bonjour");
	ft_printf(" -7|%-5.2s|\n", "bonjour");

	// printf("  1string 1 |%s| string 2 |%s|\n", "toto", "bonjour");
	// ft_printf(" -1string 1 |%s| string 2 |%s|\n\n", "toto", "bonjour");

	// printf("  2string 1 |%   s| string 2 |% s|\n", "toto", "bonjour");
	// ft_printf(" -2string 1 |%   s| string 2 |% s|\n\n", "toto", "bonjour");

	// printf("  3string 1 |%12s| string 2 |%12s|\n", "toto", "bonjour");
	// ft_printf(" -3string 1 |%12s| string 2 |%12s|\n\n", "toto", "bonjour");

	// printf("  4string 1 |%-12s| string 2 |%-12s|\n", "toto", "bonjour");
	// ft_printf(" -4string 1 |%-12s| string 2 |%-12s|\n\n", "toto", "bonjour");

	// printf("  5string 1 |%0s| string 2 |%0s|\n", "toto", "bonjour");
	// ft_printf(" -5string 1 |%0s| string 2 |%0s|\n\n", "toto", "bonjour");

	// printf("  6string 1 |%012s| string 2 |%012s|\n", "toto", "bonjour");
	// ft_printf(" -6string 1 |%012s| string 2 |%012s|\n\n", "toto", "bonjour");

	// printf("  7string 1 |%-012s| string 2 |%012s|\n", "toto", "bonjour");
	// ft_printf(" -7string 1 |%-012s| string 2 |%012s|\n\n", "toto", "bonjour");

	// ft_printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c');
	// printf("1caractere 1 %c caractere 2 %c\n\n", 'a', 'c');

	// ft_printf("2caractere 1 %   c caractere 2 % c\n", 'a', 'c');
	// printf("3caractere 1 %   c caractere 2 % c\n\n", 'a', 'c');

	// // ft_printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c');
	// // printf("4caractere 1 %12c caractere 2 %12c\n\n", 'a', 'c');

	// // ft_printf("4caractere 1 %-12c caractere 2 %-12c\n", 'a', 'c');
	// // printf("4caractere 1 %-12c caractere 2 %-12c\n\n", 'a', 'c');

	// // ft_printf("5caractere 1 %0c caractere 2 %0c\n", 'a', 'c');
	// // printf("5caractere 1 %0c caractere 2 %0c\n\n", 'a', 'c');

	// // ft_printf("6caractere 1 %012c caractere 2 %012c\n", 'a', 'c');
	// // printf("6caractere 1 %012c caractere 2 %012c\n\n", 'a', 'c');

	// // ft_printf("7caractere 1 %-012c caractere 2 %012c\n", 'a', 'c');
	// // printf("7caractere 1 %-012c caractere 2 %012c\n\n", 'a', 'c');

	// // ft_printf("8caractere 1 %*c caractere 2 %*c\n", 'a', 6, 6, 6);
	// // printf("8caractere 1 %*c caractere 2 %*c\n\n", 'a', 6, 6, 6);

	// // ft_printf("9caractere 1 %+c caractere 2 %+c\n", 'a', 6, 'c', 6);
	// // printf("9caractere 1 %+c caractere 2 %+c\n\n", 'a', 6, 'c', 6);

	// // ft_printf("10caractere 1 %+12c caractere 2 %+12c\n", 'a', 6, 'c', 6);
	// // printf("10caractere 1 %+12c caractere 2 %+12c\n\n", 'a', 6, 'c', 6);

	// // ft_printf("11caractere 1 %*12c caractere 2 %*12c\n", 'a', -6, 'a', 6);
	// // printf("11caractere 1 %*12c caractere 2 %*12c\n\n", 'a', -6, 'a', 6);

	// // ft_printf("12caractere 1 %-+5c caractere 2 %-+5c\n", 'a', 'c');
	// // printf("12caractere 1 %-+5c caractere 2 %-+5c\n\n", 'a', 'c');

	// // ft_printf("13caractere 1 %-+05c caractere 2 %-+05c\n", 'a', 'c');
	// // printf("13caractere 1 %-+05c caractere 2 %-+05c\n\n", 'a', 'c');

	// // ft_printf("14caractere 1 %+-5c caractere 2 %+-5c\n", 'a', 'c');
	// // printf("14caractere 1 %+-5c caractere 2 %+-5c\n\n", 'a', 'c');

	// // ft_printf("15caractere 1 %.c caractere 2 %.c\n", 'a', 'c');
	// // printf("15caractere 1 %.c caractere 2 %.c\n\n", 'a', 'c');

	// // ft_printf("16caractere 1 %.6c caractere 2 %.6c\n", 'a', 'c');
	// // printf("16caractere 1 %.6c caractere 2 %.6c\n\n", 'a', 'c');

	return (0);
}
