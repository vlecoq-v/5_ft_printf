/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/05 19:08:52 by vlecoq-v         ###   ########.fr       */
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
	double		dbl;

	dbl = 1234.1;
	char_test = ft_strdup("mamen mamen\n");
	i = 42;

	//  ft_printf("%d\n", ft_printf("%#o\n", 42));
  	// printf("%d\n\n", printf("%#o\n", 42));

//   ft_printf("%d\n", ft_printf("%#d\n", 42));
//   printf("%d\n\n", printf("%#d\n", 42));

//   ft_printf("%d\n", ft_printf("%#5o\n", 42));
//   printf("%d\n\n", printf("%#5o\n", 42));

//   ft_printf("%d\n", ft_printf("%#5x\n", 42));
//   printf("%d\n\n", printf("%#5x\n", 42));
//   ft_printf("%d\n", ft_printf("%#5X\n", 42));
//   printf("%d\n\n", printf("%#5X\n", 42));
//   ft_printf("%d\n", ft_printf("%#5p\n", 42));
//   printf("%d\n\n", printf("%#5p\n", 42));
//   ft_printf("%d\n", ft_printf("%#5d\n", 42));
//   printf("%d\n\n", printf("%#5d\n", 42));
//   ft_printf("%d\n", ft_printf("%#5u\n", 42));
//   printf("%d\n\n", printf("%#5u\n", 42));
//   ft_printf("%d\n", ft_printf("%#5o\n", 42));
//   printf("%d\n\n", printf("%#5o\n", 42));

//   ft_printf("%d\n", ft_printf("%o\n", -42));
//   printf("%d\n\n", printf("%o\n", -42));
  
//   ft_printf("%d\n", ft_printf("11signed 1 %*12i signed 2 %*12i signed 3 %*12i\n", 42, -6, -42, 6, 12, 6));
//   printf("%d\n\n", printf("11signed 1 %*12i signed 2 %*12i signed 3 %*12i\n\n", 42, -6, -42, 6, 12, 6));

//   ft_printf("%d\n", ft_printf("11unsigned 1 %*12u unsigned 2 %*12u unsigned 3 %*12u\n", 42, -6, -42, 6, 12, 6));
//   printf("%d\n\n", printf("11unsigned 1 %*12u unsigned 2 %*12u unsigned 3 %*12u\n\n", 42, -6, -42, 6, 12, 6));
    

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

	// printf("BUFF SIZE = %d\n", BUFF_SZ);
	// ft_printf("--- %X\n", 42);
	// printf("+++ %X\n", 42);
	// ft_printf("%+ u\n", -1);
	// ft_printf("%s\n", L"ݗݜशব");

	// printf("UNDEFINED BEHAVIOR\n\n");
	// printf("1 +++ %20.5ll#x|\n", 9223372036854775807);
	// ft_printf("1 --- %20.5ll#x|\n", 9223372036854775807);
	// printf("2 +++ %+#20.5#llx|\n", 9223372036854775807);
	// ft_printf("2 --- %+#20.5#llx|\n", 9223372036854775807);
	// printf("3 +++ %#20#.5#ll#x|\n", 9223372036854775807);
	// ft_printf("3 --- %#20ll#.5#ll#x|\n", 9223372036854775807);
	// ft_printf("4 --- %0 10d|\n", 42);
	// printf("4 +++ %0 10d|\n", 42);
	// printf("++++ %.2s is a string\n", "this");
	// ft_printf("---  %.2s is a string\n", "this");
	// ft_printf("--- %5+d|\n", 42);
	// printf("+++ %5+d|\n", 42);
	// printf("6 --- %#20#.5#ll#x#|\n", 9223372036854775807);
	// ft_printf("6 +++ %#20#.5#ll#x#|\n", 9223372036854775807);
	// printf("--- |%#20#.5#ll##|\n", 9223372036854775807);
	// ft_printf("+++ |%#20#.5#ll##|\n", 9223372036854775807);
	// printf("4.1 --- |%0.5|\n", 9223372036854775807);
	// ft_printf("+++ |%0.5|\n", 2);
	// printf("4.2 --- |%0.5|\n", "asd");
	// ft_printf("+++ |%0.5|\n", "asdf");
	// printf("5 --- |%020| |%13d|\n", 42);
	// ft_printf("+++ |%020| |%13d|\n", 42);
	// printf("5.1 --- |%TT| |%13d|\n", 42);
	// ft_printf("+++ |%TT| |%13d|\n", 42);
	// ft_printf("6--- %hhld\n", 128);
	// printf("6+++ %hhld\n", 128);
	// ft_printf("7 --- @main_ftprintf: %####000033..1d\n", 256);
	// printf("7 +++ @main_ftprintf: %####000033..1d\n", 256);
	// ft_printf("--- %ld\n", 9223372036854775807);
	// printf("+++ %ld\n", 9223372036854775807);
	// ft_printf("--- %lx\n", 922);
	// printf("+++ %lx\n", 922);
	// printf("<-- (%d)\n", ft_printf("--- %zd", -1));
	// printf("+++ %zd\n", -1);
	// ft_printf("--- |%S|\n", "prout");
	// printf("+++ AGAGA |%S|\n", "prout");
	// printf("size of = ll = %d\n", sizeof(long long));
	// printf("size of = u_ll = %d\n", sizeof(unsigned long long));
	// printf("size of = l = %d\n", sizeof(long));
	// printf("size of = f = %d\n", sizeof(float));
	// printf("size of = int = %d\n", sizeof(int));
	// printf("size of = void* = %d\n", sizeof(void*));

	// printf("\nJJJJJJJJJJJJJJJJJJJJJJJJ\n\n");

	// printf("+++ %jd\n", 0);
	// ft_printf("--- %jd\n", 0);
	// printf("+++ %jd\n", -1);
	// ft_printf("--- %jd\n", -1);
	// printf("+++ %ju\n", 0);
	// ft_printf("--- %ju\n", 0);
	// printf("+++ %ju\n", -1);
	// ft_printf("--- %ju\n", -1);
	// printf("+++ %10jd\n", 1234);
	// ft_printf("--- %10jd\n", 1234);
	// printf("+++ %10jd\n", -1234);
	// ft_printf("--- %10jd\n", -1234);

	// printf("+++ %.10jd\n", 1234);
	// ft_printf("--- %.10jd\n", 1234);
	// printf("+++ %.10jd\n", -1234);
	// ft_printf("--- %.10jd\n", -1234);

	// printf("+++ %.0jd\n", 1234);
	// ft_printf("--- %.0jd\n", 1234);
	// printf("+++ %.0jd\n", -1234);
	// ft_printf("--- %.0jd\n", -1234);

	// printf("+++ %#jd\n", 1234);
	// ft_printf("--- %#jd\n", 1234);
	// printf("+++ %#jd\n", -1234);
	// ft_printf("--- %#jd\n", -1234);

		printf("\nFFFFFFFFFFFFFFFFFFFFFF\n\n");

	// printf("+++ %f\n", 0.011234);
	// ft_printf("--- %f\n", 0.011234);
	// printf("+++ %f\n", -1.011234);
	// ft_printf("--- %f\n", -1.011234);
	// printf("+++ %ju\n", 0);
	// ft_printf("--- %ju\n", 0);
	// printf("+++ %ju\n", -1);
	// ft_printf("--- %ju\n", -1);
	// printf("+++ %f\n", 1234.1);
	// ft_printf("--- %f\n", 1234.1);
	// printf("+++ %f\n", dbl);
	// ft_printf("--- %f\n", dbl);	
	// printf("+++ %f\n", -0.01);
	// ft_printf("--- %f\n", -0.01);
	printf("+++ %f\n", 1234.999999999999);
	ft_printf("--- %f\n", 1234.999999999999);
	printf("+++ %.18f\n", 1234.999999999999);
	ft_printf("--- %.18f\n", 1234.999999999999);
	printf("+++ %.15f\n", 1234.999999999999);
	ft_printf("--- %.15f\n", 1234.999999999999);
	printf("+++ %.17f\n", 1234.999999999999);
	ft_printf("--- %.17f\n", 1234.999999999999);

	// printf("+++ %.10f\n", 1234.011234);
	// ft_printf("--- %.10f\n", 1234.011234);
	// printf("+++ %.10f\n", -1234.011234);
	// ft_printf("--- %.10f\n", -1234.011234);

	// printf("+++ %.0f\n", 1234.011234);
	// ft_printf("--- %.0f\n", 1234.011234);
	// printf("+++ %.0f\n", -1234.011234);
	// ft_printf("--- %.0f\n", -1234.011234);

	// printf("+++ %#f\n", 1234.011234);
	// ft_printf("--- %#f\n", 1234.011234);
	// printf("+++ %#f\n", -1234.011234);
	// ft_printf("--- %#f\n", -1234.011234);


	// printf("\nZZZZZZZZZZZZZZZZZZZZZZZ\n\n");
	// printf("  <-- %d\n", printf("--- p1 de &i --> %+0.10jd", 42));
	// printf("  <-- %d\n", ft_printf("+++ p1 de &i --> %+0.10jd", 42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %+jd", -1));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+jd", -1));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %++jd", -42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %++jd", -42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %++ju", -42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %++ju", -42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %#jd", 700000000));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#jd", 700000000));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %+-10jd", 0));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+-10jd", 0));


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
	// printf("+++ %x\n", 0);
	// ft_printf("--- %x\n", 0);

	// printf("  <-- %d\n", printf("--- p2 de &i --> %+x",42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+x",42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %+-x", -42));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+-x", -42));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %l#x", 700000000));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %l#x", 700000000));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %#x", 0));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %#x", 0));
	// ft_printf("--- %8x\n", 42);
	// printf("+++ %8x\n", 42);
	

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

	// printf("  <-- %d\n", printf("+++ p2 de &i --> %#+hd", -1));
	// printf("  <-- %d\n", ft_printf("--- p2 de &i --> %#+hd", -1));

	// printf("  <-- %d\n", printf("+++ p2 de &i --> %++lld", -42));
	// printf("  <-- %d\n", ft_printf("--- p2 de &i --> %++lld", -42));

	// printf("  <-- %d\n", printf("+++ p2 de &i --> %++lld", -1));
	// printf("  <-- %d\n", ft_printf("--- p2 de &i --> %++lld", -1));

	// printf("  <-- %d\n", printf("+++ p2 de &i --> %#d", 700000000));
	// printf("  <-- %d\n", ft_printf("--- p2 de &i --> %#d", 700000000));

	// printf("  <-- %d\n", printf("--- p2 de &i --> %+-10d", 0));
	// printf("  <-- %d\n", ft_printf("+++ p2 de &i --> %+-10d", 0));
	// ft_printf("--- %hhd\n", 128);
	// printf("+++ %hhd\n", 128);
	// ft_printf("--- @moulitest: %#.x\n", 0);
	// printf("+++ @moulitest: %#.x %#.0x\n", 0, 0);

	// ft_printf("--- %x\n", 0);
	// printf("+++ %hhd\n", 0);
	// ft_printf("--- %#x\n", 0);


	// printf("\nUUUUUUUUUUUUUUUUUUUUUUUUUUUUU\n\n");
	// printf("  <-- %d\n", printf("-- p1 de &i --> %+0.10u", 42));
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

	// printf("\nSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\n\n");
	// printf("<- %d\n", printf("16string 1 |%.6s| string 2 |%.6s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("16string 1 |%.6s| string 2 |%.6s|", "toto", "bonjour"));
	return (0);
}
