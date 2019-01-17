/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/17 10:50:15 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas %d mais bien %d ZBOUB\n"

int	main(void)
{
	printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c');
	ft_printf("1caractere 1 %c caractere 2 %c\n\n", 'a', 'c');
	printf("2caractere 1 %   c caractere 2 % c\n", 'a', 'c');
	ft_printf("3caractere 1 %   c caractere 2 % c\n\n", 'a', 'c');
	printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c');
	ft_printf("4caractere 1 %12c caractere 2 %12c\n\n", 'a', 'c');
	printf("4caractere 1 %-12c caractere 2 %-12c\n", 'a', 'c');
	ft_printf("4caractere 1 %-12c caractere 2 %-12c\n\n", 'a', 'c');
	printf("5caractere 1 %0c caractere 2 %0c\n", 'a', 'c');
	ft_printf("5caractere 1 %0c caractere 2 %0c\n\n", 'a', 'c');
	printf("6caractere 1 %012c caractere 2 %012c\n", 'a', 'c');
	ft_printf("6caractere 1 %012c caractere 2 %012c\n\n", 'a', 'c');
	printf("7caractere 1 %-012c caractere 2 %012c\n", 'a', 'c');
	ft_printf("7caractere 1 %-012c caractere 2 %012c\n\n", 'a', 'c');
	printf("8caractere 1 %*c caractere 2 %*c\n", 'a', 6, 6, 6);
	ft_printf("8caractere 1 %*c caractere 2 %*c\n\n", 'a', 6, 6, 6);
	printf("9caractere 1 %+c caractere 2 %+c\n", 'a', 6, 'c', 6);
	ft_printf("9caractere 1 %+c caractere 2 %+c\n\n", 'a', 6, 'c', 6);
	printf("10caractere 1 %+12c caractere 2 %+12c\n", 'a', 6, 'c', 6);
	ft_printf("10caractere 1 %+12c caractere 2 %+12c\n\n", 'a', 6, 'c', 6);
	printf("11caractere 1 %*12c caractere 2 %*12c\n", 'a', -6, 'a', 6);
	ft_printf("11caractere 1 %*12c caractere 2 %*12c\n\n", 'a', -6, 'a', 6);
	printf("12caractere 1 %-+5c caractere 2 %-+5c\n", 'a', 'c');
	ft_printf("12caractere 1 %-+5c caractere 2 %-+5c\n\n", 'a', 'c');
	printf("13caractere 1 %-+05c caractere 2 %-+05c\n", 'a', 'c');
	ft_printf("13caractere 1 %-+05c caractere 2 %-+05c\n\n", 'a', 'c');
	printf("14caractere 1 %+-5c caractere 2 %+-5c\n", 'a', 'c');
	ft_printf("14caractere 1 %+-5c caractere 2 %+-5c\n\n", 'a', 'c');
	printf("15caractere 1 %.c caractere 2 %.c\n", 'a', 'c');
	ft_printf("15caractere 1 %.c caractere 2 %.c\n\n", 'a', 'c');
	printf("16caractere 1 %.6c caractere 2 %.6c\n", 'a', 'c');
	ft_printf("16caractere 1 %.6c caractere 2 %.6c\n\n", 'a', 'c');

	return (0);
}
