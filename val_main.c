/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/17 11:59:24 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas %d mais bien %d ZBOUB\n"
# define TEST -1308234
#include <limits.h>

// void ft_temp_print(t_conv *conv)
// {
	// if (ft_strncmp(conv->sz, "h", 2) == 0)
	// 	printf("h %hu\n", (unsigned short)conv->arg);
	// if (ft_strncmp(conv->sz, "hh", 2) == 0)
	// 	printf("hh %hhu\n", (char*)conv->arg);
	// if (ft_strncmp(conv->sz, "l", 2) == 0)
	// 	printf("l %lu\n", (long)conv->arg);
	// if (ft_strncmp(conv->sz, "ll", 2) == 0)
	// 	printf("ll %llu\n",(long long)conv->arg);
// }

int	main(void)
{
	t_conv	*conv;
	int		c;
	void	*ptr;
	char	value;
	long long	i;
	long long	d;


	i = 5876651234;

	// conv->arg = (void*)i;
	// conv->tp = 'p';
	// conv->sz_tp[0] = NULL;
	// ft_strcpy(conv->sz, "hh");
	// ft_conv_to_str(conv);
	// printf("+++ apres itoa int str = %s\n\n", conv->str);
	// printf("--- p de i        %p\n", i);

	// conv->arg = &i;
	// ft_conv_to_str(conv);
	// printf("--- printf de test en d en hex = %#lx\n", &i);
	// printf("--- printf de test en d en dec = %lu\n", &i);
	// printf("+++ apres itoa int str = %s\n\n", conv->str);
	printf("--- p de &i        %p\n", &i);
	ft_printf("+++ p de &i    %p\n", &i);
	printf("--- p de &i        %p\n", i);
	ft_printf("+++ p de &i    %p\n", i);
	// ft_printf("--- TEST 1 %lld\n", -42);
	// printf("+++ TEST 1 %lld\n\n", -42);
	// ft_printf("--- TEST 2 %lld\n", -7000000000);
	// printf("+++ TEST 2 %lld\n\n", -7000000000);
	// ft_printf("--- TEST 3 %hhd\n", -42);
	// printf("+++ TEST 3 %hhd\n\n", -42);
	// ft_printf("--- TEST 4 %d\n", -7000000000);
	// printf("+++ TEST 4 %d\n\n", -7000000000);
	// ft_printf("--- TEST 5 %hd\n", 456789);
	// printf("+++ TEST 5 %hd\n\n", 456789);
	// ft_printf("--- TEST 6 %hd\n", -7000000000);
	// printf("+++ TEST 6 %hd\n\n", -7000000000);
	// ft_printf("--- TEST 7 %llu\n", -42);
	// printf("+++ TEST 7 %llu\n\n", -42);
	// ft_printf("--- TEST 8 %u\n", -7000000000);
	// printf("+++ TEST 8 %u\n\n", -7000000000);
	// 	ft_printf("--- mamenmamen renvoie -42 %d\n", 42);
	// printf("+++ mamnmamen renvoie -42 %d\n\n", 42);
	// 	ft_printf("--- mamenmamen renvoie -42 %d\n", 1);
	// printf("+++ mamnmamen renvoie -42 %d\n\n", 1);
	// 	ft_printf("--- mamenmamen renvoie -42 %d\n", 7000000000);
	// printf("+++ mamnmamen renvoie -42 %d\n\n", 7000000000);
	return (0);
}
