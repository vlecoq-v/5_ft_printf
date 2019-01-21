/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/21 16:37:10 by vlecoq-v         ###   ########.fr       */
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

	// printf("PPPPPPPPPPPPPPPPPPPPPPPPPPP\n\n");
	// printf("  <-- %d\n", printf("--- p1 de &i --> %-10p // %s  ", &i, "crotte"));
	// printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %-10p // %s  ", &i, "crotte"));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %p", i));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %p", i));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %p", &char_test));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %p", &char_test));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %p", char_test));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %p", char_test));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %p", char_test + 1));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %p", char_test + 1));

	printf("UNDEFINED BEHAVIOR\n\n");
	// printf("1 --- %20.5ll#x|\n", 9223372036854775807);
	// ft_printf("+++ %20.5ll#x|\n", 9223372036854775807);
	// printf("2 --- %+#20.5#llx|\n", 9223372036854775807);
	// ft_printf("+++ %+#20.5#llx|\n", 9223372036854775807);
	// printf("3 --- %#20#.5#ll#x|\n", 9223372036854775807);
	// ft_printf("+++ %#20ll#.5#ll#x|\n", 9223372036854775807);
	ft_printf("--- %0 10d|\n", 42);
	printf("+++ %0 10d|\n", 42);
	ft_printf("---  %.2s is a string\n", "this");
	printf("++++ %.2s is a string\n", "this");
	// ft_printf("--- %5+d|\n", 42);
	// printf("+++ %5+d|\n", 42);
	// printf("3 --- %#20#.5#ll#x#|\n", 9223372036854775807);
	// ft_printf("+++ %#20ll#.5#ll#x#|\n", 9223372036854775807);
	// printf("4 --- |%#20#.5#ll##|\n", 9223372036854775807);
	// ft_printf("+++ |%#20ll#.5#ll##|\n", 9223372036854775807);
	// printf("4.1 --- |%0.5|\n", 9223372036854775807);
	// ft_printf("+++ |%0.5|\n", 2);
	// printf("4.2 --- |%0.5|\n", "asd");
	// ft_printf("+++ |%0.5|\n", "asdf");
	// printf("5 --- |%020| |%13d|\n", 42);
	// ft_printf("+++ |%020| |%13d|\n", 42);
	// printf("5.1 --- |%TT| |%13d|\n", 42);
	// ft_printf("+++ |%TT| |%13d|\n", 42);

	// printf("\nOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n\n");
	// printf("  <-- %d\n", printf("--- p1 de &i --> %-+10o", 42));
	// printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %+-10o", 42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %#lo", -42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#lo", -42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %#-10o", 0));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#-10o", 0));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %hho", 700000000));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %hho", 700000000));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %o", 0));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %o", 0));

	// printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
	// printf("  <-- %d\n", printf("--- p1 de &i --> %+x", 42));
	// printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %+x", 42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %+x",42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+x",42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %+-x", -42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+-x", -42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %lx", 700000000));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %lx", 700000000));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %x", 0));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %x", 0));

	// printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");
	// printf("  <-- %d\n", printf("--- p1 de &i --> %+X", 42));
	// printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %+X", 42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %#+hX", -1));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#+hX", -1));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %++llX", -42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %++llX", -42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %#X", 700000000));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#X", 700000000));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %+-10X", 0));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+-10X", 0));

	// printf("\nDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD\n\n");
	// printf("  <-- %d\n", printf("--- p1 de &i --> %+0.10d", 42));
	// printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %+0.10d", 42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %#+hd", -1));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#+hd", -1));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %++lld", -42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %++lld", -42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %++llu", -42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %++llu", -42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %#d", 700000000));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#d", 700000000));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %+-10d", 0));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+-10d", 0));

	// printf("\nUUUUUUUUUUUUUUUUUUUUUUUUUUUUU\n\n");
	// printf("  <-- %d\n", printf("--- p1 de &i --> %+0.10u", 42));
	// printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %+0.10u", 42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %#+hu", -1));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#+hu", -1));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %++llu", -42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %++llu", -42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %++llu", -42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %++llu", -42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %#u", 700000000));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#u", 700000000));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %+-10u", 0));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+-10u", 0));
	return (0);
}
