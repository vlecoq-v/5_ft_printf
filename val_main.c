/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/09 17:52:36 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas %d mais bien %d ZBOUB\n"

int	main(int argc, char **argv)
{

	if (argc == 1 && argv[0])
	{
		printf(STR, 1, 2);
		ft_printf(STR, 1, 2);
		printf("signed short|%hd|\n", 1);
    	printf("unsigned short|%hu| plip\n", 1);
		printf("signed char|%hhd|\n", 1);
    	printf("unsigned char|%hhu| plip\n", 1);
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
	}
	return (0);
}
