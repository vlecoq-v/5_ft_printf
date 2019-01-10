/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/09 18:49:10 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas %d mais bien %d ZBOUB\n"

int	main(int argc, char **argv)
{
	t_conv	*conv;
	int		c;

	c = 300;
	printf("%hhd\n", c);
	printf("%d\n", (unsigned char)c);
	printf("%d\n", (char)c);
	printf("%d\n", (unsigned char) -c);



	if (argc == 1 && argv[0])
	{
		// printf(STR, 1, 2);
		//ft_printf(STR, 1, 2);
		printf("signed short|%hhd|\n", c);
    	printf("unsigned short|%hhu| plip\n", c);
		printf("signed char|%hhd|\n", c);
    	printf("unsigned char|%hhu| plip\n", -c);
		printf("signed short|%hhd|\n", -300);
    	printf("unsigned short|%hhu| plip\n", -300);
		printf("signed char|%hhd|\n", -400);
    	printf("unsigned char|%hhu| plip\n", -400);
		printf("int hexa en int hexa |%o|\n", c);
	}
	conv->arg = "1";
	conv->tp = 'u';
	conv->tp = "hh";
	conv->tp = "h";
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
