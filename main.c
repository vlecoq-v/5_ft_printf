/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/09 14:34:33 by vlecoq-v         ###   ########.fr       */
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
		printf("4567 |%105.100d| plip\n", 12);
    	printf("4567 |%10.5d| plip\n", 12);
    	printf("|%10.5d|\n", -12);
		printf("|%10d|\n", -12);
		printf("|%010d|\n", -12); 
		printf("|%-10.5d|\n", -12);
		printf("|%-10.5d|\n", -12);
	}
	return (0);
}
