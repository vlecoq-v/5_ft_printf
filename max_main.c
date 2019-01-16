/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/16 16:16:10 by morgani          ###   ########.fr       */
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

	printf("  1string 1 |%s| string 2 |%s|\n", "toto", "bonjour");
	ft_printf(" -1string 1 |%s| string 2 |%s|\n\n", "toto", "bonjour");

	printf("  2string 1 |%   s| string 2 |% s|\n", "toto", "bonjour");
	ft_printf(" -2string 1 |%   s| string 2 |% s|\n\n", "toto", "bonjour");

	printf("  3string 1 |%12s| string 2 |%12s|\n", "toto", "bonjour");
	ft_printf(" -3string 1 |%12s| string 2 |%12s|\n\n", "toto", "bonjour");

	printf("  4string 1 |%-12s| string 2 |%-12s|\n", "toto", "bonjour");
	ft_printf(" -4string 1 |%-12s| string 2 |%-12s|\n\n", "toto", "bonjour");

	printf("  5string 1 |%0s| string 2 |%0s|\n", "toto", "bonjour");
	ft_printf(" -5string 1 |%0s| string 2 |%0s|\n\n", "toto", "bonjour");

	printf("  6string 1 |%012s| string 2 |%012s|\n", "toto", "bonjour");
	ft_printf(" -6string 1 |%012s| string 2 |%012s|\n\n", "toto", "bonjour");

	printf("  7string 1 |%-012s| string 2 |%012s|\n", "toto", "bonjour");
	ft_printf(" -7string 1 |%-012s| string 2 |%012s|\n\n", "toto", "bonjour");

	return (0);
}
