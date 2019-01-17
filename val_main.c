/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/17 18:28:03 by vlecoq-v         ###   ########.fr       */
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
	long long	i;
	char		*char_test;

	char_test = ft_strdup("mamen mamen\n");
	i = 42;

	printf("PPPPPPPPPPPPPPPPPPPPPPPPPPP\n\n");
	printf("  <-- %d\n", printf("--- p1 de &i --> %-10p", &i));
	printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %-10p", &i));

	printf("  <-- %d\n", printf("--- p2 de &i --> %p", i));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %p", i));

	printf("  <-- %d\n", printf("--- p2 de &i --> %p", &char_test));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %p", &char_test));

	printf("  <-- %d\n", printf("--- p2 de &i --> %p", char_test));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %p", char_test));

	printf("  <-- %d\n", printf("--- p2 de &i --> %p", char_test + 1));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %p", char_test + 1));

	printf("\nOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n\n");
	printf("  <-- %d\n", printf("--- p1 de &i --> %-+10o", 42));
	printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %+-10o", 42));

	printf("  <-- %d\n", printf("--- p2 de &i --> %#lo", -42));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#lo", -42));

	printf("  <-- %d\n", printf("--- p2 de &i --> %#-10o", 0));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#-10o", 0));

	printf("  <-- %d\n", printf("--- p2 de &i --> %hho", 700000000));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %hho", 700000000));

	printf("  <-- %d\n", printf("--- p2 de &i --> %o", 0));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %o", 0));

	printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
	printf("  <-- %d\n", printf("--- p1 de &i --> %+x", 42));
	printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %+x", 42));

	printf("  <-- %d\n", printf("--- p2 de &i --> %+x",42));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+x",42));

	printf("  <-- %d\n", printf("--- p2 de &i --> %+-x", -42));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+-x", -42));

	printf("  <-- %d\n", printf("--- p2 de &i --> %lx", 700000000));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %lx", 700000000));

	printf("  <-- %d\n", printf("--- p2 de &i --> %x", 0));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %x", 0));

	printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");
	printf("  <-- %d\n", printf("--- p1 de &i --> %+X", 42));
	printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %+X", 42));

	printf("  <-- %d\n", printf("--- p2 de &i --> %#+hX", -1));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#+hX", -1));

	printf("  <-- %d\n", printf("--- p2 de &i --> %++llX", -42));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %++llX", -42));

	printf("  <-- %d\n", printf("--- p2 de &i --> %#X", 700000000));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#X", 700000000));

	printf("  <-- %d\n", printf("--- p2 de &i --> %+-10X", 0));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+-10X", 0));

	printf("\nDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD\n\n");
	printf("  <-- %d\n", printf("--- p1 de &i --> %+0.10d", 42));
	printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %+0.10d", 42));

	printf("  <-- %d\n", printf("--- p2 de &i --> %#+hd", -1));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#+hd", -1));

	printf("  <-- %d\n", printf("--- p2 de &i --> %++lld", -42));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %++lld", -42));

	printf("  <-- %d\n", printf("--- p2 de &i --> %#d", 700000000));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#d", 700000000));

	printf("  <-- %d\n", printf("--- p2 de &i --> %+-10d", 0));
	printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+-10d", 0));
	return (0);
}
