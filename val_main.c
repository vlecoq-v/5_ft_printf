/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/14 17:23:35 by vlecoq-v         ###   ########.fr       */
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

	conv->arg = i;
	conv->tp = 'X';
	// ft_strcpy(conv->sz, "hh");
	ft_conv_to_str(conv);
	printf("printf de test en d = %X\n", i);
	printf("apres itoa int str = %s\n\n", conv->str);
	// ft_memdel((void**)&conv->str);
	d = &i;
	printf("d = %x\n", d);
	printf("printf de test en p = %hhp\n", d);
	// if (conv->tp != 's')
	// 	printf("prout\n");
	// printf("printf de test en u = %llu\n", -1308234);
	// c = 300;
	// printf("%hhd\n", c);
	// printf("%d\n", (unsigned char)c);
	// printf("%d\n", (char)c);
	// printf("%d\n", (unsigned char) -c);
	// // printf(STR, 1, 2);
	// //ft_printf(STR, 1, 2);
	// printf("signed short|%hhd|\n", c);
	// printf("unsigned short|%hhu| plip\n", c);
	// printf("signed char|%hhd|\n", c);
	// printf("unsigned char|%hhu| plip\n", -c);
	// printf("signed short|%hhd|\n", -300);
	// printf("unsigned short|%hhu| plip\n", -300);
	// printf("signed char|%hhd|\n", -400);
	// printf("unsigned char|%hhu| plip\n", -400);
	// printf("int hexa en int hexa |%o|\n", c);
	//ft_int()
/*		printf("signed short|%hd|\n", 300);
    	printf("unsigned short|%hu| plip\n", 300);
		printf("signed char|%hhd|\n", 300);
    	printf("unsigned char|%hhu| plip\n", 300);
		printf("signed short|%hd|\n", -300);
    	printf("unsigned short|%hu| plip\n", -300);
		printf("signed char|%hhd|\n", -300);
    	printf("unsigned char|%hhu| plip\n", -300);
		printf("signed short|%hd|\n", -1);
    	printf("unsigned short|%hu| plip\n", -1);
		printf("signed char|%hhd|\n", -1);
    	printf("unsigned char|%hhu| plip\n", -1);*/
	return (0);
}
