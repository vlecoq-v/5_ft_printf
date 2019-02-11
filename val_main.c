/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/11 13:28:39 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas %d mais bien %d ZBOUB\n"
# define TEST -1308234
#include <limits.h>
#include <float.h>

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

	// ft_printf("%d\n", ft_printf("ljasdfiasdfaiusfaiusfnaasind fl%#o\n", asdf));
  	// printf("%d\n\n", printf("ljasdfiasdfaiusfaiusfnaasind fl%#o\n", asdf));

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
    

	// printf("EEEEEEEEEXXXXXXXXXXIIIIIIIIIIIITTTTTTTTTT\n\n");

	// ft_printf("asdfasfdalj aj sdfkahhsd falsdf kaj sdf kajns dfakbsb dfajsd f alsd flajsd fajsd fajcx vlxcjkj kdjjn agadfg a35v xc44v a 54sv54z xc55v4 asd254vc 3zx54v 3zx554v z3x5v4 3zx 4vzz33x54\n");
	// ft_printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% % 5 5 % % % 5  %% 5 %5% 5 % %%5 \n");
	// ft_printf("J'adore manger des pates le dimanche soir     \n\t%10%      Et encore plus des %20s\n", "ravioles");
	// ft_printf("Mamen Mamen %10 Mamen\n");

	// ft_printf("%s\n", "Mamen");
	// printf(" <-- %d\n", printf("+++ %s", "bonjour \0 ca \0 va ?"));
	// printf(" <-- %d\n", ft_printf("--- %s", "bonjour \0 ca \0 va ?"));
	// printf(" <-- %d\n", printf("+++ |%c|", 0));
	// printf(" <-- %d\n", ft_printf("--- |%c|", 0));
	// printf(" <-- %d\n", ft_printf("--- null %c and text", 0));
	// printf(" <-- %d\n", printf("+++ null |%c| and text", 0));

	// printf("%U\n", 42);
	// ft_printf("%U\n", 42);



	printf("PPPPPPPPPPPPPPPPPPPPPPPPPPP\n\n");
	printf("  <-- %d\n", printf("+++ p1 de &i --> %-10p // %s  ", &i, "crotte"));
	printf("  <-- %d\n", ft_printf("--- p1 de &i --> %-10p // %s  ", &i, "crotte"));

	printf("  <-- %d\n", printf("+++ p2 de &i --> %p", i));
	printf("  <-- %d\n", ft_printf("--- p2 de &i --> %p", i));

	printf("  <-- %d\n", printf("+++ p2 de &i --> %p", &char_test));
	printf("  <-- %d\n", ft_printf("--- p2 de &i --> %p", &char_test));

	printf("  <-- %d\n", printf("+++ p2 de &i --> %p", char_test));
	printf("  <-- %d\n", ft_printf("--- p2 de &i --> %p", char_test));

	printf("  <-- %d\n", printf("+++ p2 de &i --> %5.p", char_test + 1));
	printf("  <-- %d\n", ft_printf("--- p2 de &i --> %5.p", char_test + 1));
		printf("  <-- %d\n", printf("+++ p2 de 00 --> %5.p", 0));
	printf("  <-- %d\n", ft_printf("--- p2 de 00 --> %5.p", 0));

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

	// printf("\nBBBBBBBBBBBBBBBBBBBBBBB\n\n");

	// printf("+++ %b\n", 0);
	// ft_printf("--- %#b\n", 0);
	// printf("+++ %b\n", 1);
	// ft_printf("--- %#b\n", 1);
	// ft_printf("--- %#.10b\n", 1);
	// ft_printf("--- %-#10b\n", 1);
	// printf("+++ %10b\n", 1234);
	// ft_printf("--- %#10b\n", 1234);
	// printf("+++ %10b\n", -1234);
	// ft_printf("--- %10b\n", -1234);

	// printf("+++ %.10b\n", 1234);
	// ft_printf("--- %.10b\n", 1234);
	// printf("+++ %.10b\n", -1234);
	// ft_printf("--- %.10b\n", -1234);

	// printf("+++ %.0b\n", 1234);
	// ft_printf("--- %.0b\n", 1234);
	// printf("+++ %.0b\n", -1234);
	// ft_printf("--- %.0b\n", -1234);

	// printf("+++ %#b\n", 1234);
	// ft_printf("--- %#b\n", 1234);
	// printf("+++ %#b\n", -1234);
	// ft_printf("--- %#b\n", -1234);

		// printf("\nFFFFFFFFFFFFFFFFFFFFFF\n\n");

	// printf("+++ %f\n", 1.00);
	// ft_printf("--- %f\n", 2.00);
	// printf("+++ %f\n", 1.0);
	// ft_printf("--- %f\n", 1.0);
	// printf("+++ %f\n", 9223372036854775296.99999999);
	// ft_printf("--- %f\n", 9223372036854775296.000);
	// 	printf("+++ %f\n", 9223372036854775295.100);
	// ft_printf("--- %f\n", 9223372036854775295.100);
	// 	printf("+++ %f\n", 9223372036854775295.999999999);
	// ft_printf("--- %f\n", 9223372036854775295.999999999);
	// 	printf("+++ %f\n", 9223372036854775295.000);
	// ft_printf("--- %f\n", 9223372036854775295.000);
	// 	printf("+++ %f\n", 9223372036854775295.000);
	// ft_printf("--- %f\n", 9223372036854775295.000);
	// 	printf("+++ %f\n", 9223372036854775295.000);
	// ft_printf("--- %f\n", 9223372036854775295.000);
	// printf("+++ %f\n", (double)LONG_MAX);
	// ft_printf("--- %f\n", (double)LONG_MAX);
	// printf("+++ %.18f\n", -0.9223372036854775807);
	// ft_printf("--- %.18f\n", -0.9223372036854775807);
	// printf("+++ %lld\n", (long long)LONG_MAX);
	// ft_printf("--- %lld\n", (long long)LONG_MAX);
	// 	printf("+++ %lld\n", LONG_MIN);
	// ft_printf("--- %lld\n", LONG_MIN);
	// printf("+++ %f\n", FLT_MAX);
	// ft_printf("--- %f\n", FLT_MAX);
	
	// printf("+++ %Lf\n", (long double)LONG_MAX);
	// ft_printf("--- %Lf\n", (long double)LONG_MAX);
	// printf("+++ %Lf\n", 10223372036854775808.000000);
	// ft_printf("--- %Lf\n", 10223372036854775808.000000);
	// printf("+++ %Lf\n", (long double)LONG_MAX);
	// ft_printf("--- %Lf\n", (long double)LONG_MAX);
	// printf("+++ %Lf\n", (long double)LONG_MAX);
	// ft_printf("--- %Lf\n", (long double)LONG_MAX);
	// printf("+++ %Lf\n", (long double)LONG_MAX);
	// ft_printf("--- %Lf\n", (long double)LONG_MAX);


	// printf("+++ %#0+20f\n", 0.011234);
	// ft_printf("--- %#0+20f\n", 0.011234);
	// printf("+++ %#0+20.3f\n", 0.011234);
	// ft_printf("--- %#0+20.3f\n", 0.011234);
	// printf("+++ %f\n", -1.011234);
	// ft_printf("--- %f\n", -1.011234);
	// printf("+++ %f\n", 1234.1);
	// ft_printf("--- %f\n", 1234.1);
	// printf("+++ %-010d\n", -1234);
	// ft_printf("--- %-010d\n", -1234);
	// printf("+++ %f\n", dbl);
	// ft_printf("--- %f\n", dbl);	
	// printf("+++ %Lf\n", -0.01);
	// ft_printf("--- %Lf\n", -0.01);
	// printf("+++ %Lf\n", 1234.999999999999);
	// ft_printf("--- %Lf\n", 1234.999999999999);
	// printf("+++ %Lf\n", 1234.99);
	// ft_printf("--- %Lf\n", 1234.99);
	// printf("+++ %.18Lf\n", 1234.999999999999);
	// ft_printf("--- %.18Lf\n", 1234.999999999999);
	// printf("+++ %.15Lf\n", 1234.999999999999);
	// ft_printf("--- %.15Lf\n", 1234.999999999999);
	// printf("+++ %.17Lf\n", 1234.999999999999);
	// ft_printf("--- %.17Lf\n", 1234.999999999999);

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
