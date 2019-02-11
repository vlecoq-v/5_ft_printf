/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/11 18:41:21 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas |%d mais bien |%d ZBOUB\n"

int	main(void)
{
	// char string[] = "hello";
	
	// ft_printf("%#08x\n", 42);
	// printf("%#08x\n", 42);
	
	// ft_printf("%lld\n", -9223372036854775808);
	// printf("%lld\n", -9223372036854775808);
	
	// ft_printf("%jd\n", -9223372036854775808);
	// printf("%jd\n", -9223372036854775808);
	
	// ft_printf("%U\n", 4294967295);
	// printf("%U\n", 4294967295);
	
	// ft_printf("%hU\n", 4294967296);
	// printf("%hU\n", 4294967296);
	
	// ft_printf("%U\n", 4294967296);
	// printf("%U\n", 4294967296);

	// ft_printf("|%04d|\n", 0);
	// printf("|%04d|\n", 0);
	// ft_printf("|%04o|\n", 0);
	// printf("|%04o|\n", 0);
	// ft_printf("|%+d|\n", 0);
	// printf("|%+d|\n", 0);
	// ft_printf("|%zd|\n", -0);
	// printf("|%zd|\n", -0);
	// ft_printf("|%hd|\n", -32769);
	// printf("|%hd|\n", -32769);
	// ft_printf("|%03.2d|\n", 0);
	// printf("|%03.2d|\n", 0);
	// ft_printf("|@moulitest: |%.d| |%.0d|\n", 0, 0);
	// printf("|@moulitest: |%.d| |%.0d|\n", 0, 0);
	// ft_printf("|@moulitest: |%5.d| |%5.0d|\n", 0, 0);
	// printf("|@moulitest: |%5.d| |%5.0d|\n", 0, 0);
	// ft_printf("|%00+10.4d|\n", 0);
	// printf("|%00+10.4d|\n", 0);
	// ft_printf("|%.8%|\n");
	// printf("|%.8%|\n");
	// ft_printf("|titi |%+---12.5%| et|%%%0004%| et |%+1%|\n");
	// printf("|titi |%+---12.5%| et|%%%0004%| et |%+1%|\n");
	// ft_printf("|%---12.5%|\n");
	// printf("|%---12.5%|\n");
	// ft_printf("|%5%|\n");
	// printf("|%5%|\n");
	// ft_printf("|%+---12.5%|\n");
	// printf("|%+---12.5%|\n");
	// ft_printf("|%+12.5%|\n");
	// printf("|%+12.5%|\n");
	// ft_printf("|%-12.5%|\n");
	// printf("|%-12.5%|\n");
    // ft_printf(" <-- %d\n", ft_printf("--- |% 05ld|", 24));
	// printf(" <-- %d\n", printf("+++ |% 05ld|", 24));

	// ft_printf("|%05.1u|\n");
	// printf("|%05.1u|\n");

	ft_printf("|%o|\n", 0);
	printf("|%o|\n", 0);
	ft_printf("|%#o|\n", 0);
	printf("|%#o|\n", 0);
	ft_printf("|%o|\n", 0);
	printf("|%o|\n", 0);
	ft_printf("|%.2o|\n", 0);
	printf("|%.2o|\n", 0);
	ft_printf("@moulitest: |%#.o| |%#.0o|\n", 0, 0);
	printf("@moulitest: |%#.o| |%#.0o|\n", 0, 0);
	ft_printf("@moulitest: |%5.o| |%5.0o|\n", 0, 0);
	printf("@moulitest: |%5.o| |%5.0o|\n", 0, 0);
	ft_printf("|% 10.5d|\n", 4242);
	printf("|% 10.5d|\n", 4242);
	ft_printf("|% 10.5d|\n", -4242);
	printf("|% 10.5d|\n", -4242);
	ft_printf("|% 10.3d|\n", 4242);
	printf("|% 10.3d|\n", 4242);
	ft_printf("|% 10.3d|\n", -4242);
	printf("|% 10.3d|\n", -4242);
	ft_printf("|%03.2d|\n", 0);
	printf("|%03.2d|\n", 0);
	ft_printf("|t%04.2o||%#2o|et |%#-8.3o| titi\n", 0, 0, 0);
	printf("|t%04.2o||%#2o|et |%#-8.3o| titi\n", 0, 0, 0);
	
	// ft_printf("|%.2c|\n", NULL);
	// printf("|%.2c|\n", NULL);

	// printf("DDDDDDDDDDDDDDDDDDDDD\n");
	// printf("<- %d\n", printf("1chiffre 1 |%d| chiffre 2 |%d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("1chiffre 1 |%d| chiffre 2 |%d|", 42, -42));
	// printf("<- %d\n", printf("2chiffre 1 |%   d| chiffre 2 |% d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("2chiffre 1 |%   d| chiffre 2 |% d|", 42, -42));
	// printf("<- %d\n", printf("3chiffre 1 |%12d| chiffre 2 |%12d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("3chiffre 1 |%12d| chiffre 2 |%12d|", 42, -42));
	// printf("<- %d\n", printf("4chiffre 1 |%-12d| chiffre 2 |%-12d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("4chiffre 1 |%-12d| chiffre 2 |%-12d|", 42, -42));
	// printf("<- %d\n", printf("5chiffre 1 |%0d| chiffre 2 |%0d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("5chiffre 1 |%0d| chiffre 2 |%0d|", 42, -42));
	// printf("<- %d\n", printf("6chiffre 1 |%012d| chiffre 2 |%012d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("6chiffre 1 |%012d| chiffre 2 |%012d|", 42, -42));
	// printf("<- %d\n", printf("7chiffre 1 |%-012d| chiffre 2 |%012d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("7chiffre 1 |%-012d| chiffre 2 |%012d|", 42, -42));
	// printf("<- %d\n", printf("8chiffre 1 |%*d| chiffre 2 |%*d|", 42, 6, 6, 6));
	// ft_printf("<- %d\n", ft_printf("8chiffre 1 |%*d| chiffre 2 |%*d|", 42, 6, 6, 6));
	// printf("<- %d\n", printf("9chiffre 1 |%+d| chiffre 2 |%+d|", 42, 6, -42, 6));
	// ft_printf("<- %d\n", ft_printf("9chiffre 1 |%+d| chiffre 2 |%+d|", 42, 6, -42, 6));
	// printf("<- %d\n", printf("10chiffre 1 |%+12d| chiffre 2 |%+12d|", 42, 6, -42, 6));
	// ft_printf("<- %d\n", ft_printf("10chiffre 1 |%+12d| chiffre 2 |%+12d|", 42, 6, -42, 6));
	// printf("<- %d\n", printf("11chiffre 1 |%*12d| chiffre 2 |%*12d|", 42, -6, 42, 6));
	// ft_printf("<- %d\n", ft_printf("11chiffre 1 |%*12d| chiffre 2 |%*12d|", 42, -6, 42, 6));
	// printf("<- %d\n", printf("12chiffre 1 |%-+5d| chiffre 2 |%-+5d|", 42, -42));
	// printf("<- %d\n", ft_printf("12chiffre 1 |%-+5d| chiffre 2 |%-+5d|", 42, -42));
	// printf("<- %d\n", printf("12chiffre 1 |%-5d| chiffre 2 |%-5d|", 42, -42));
	// printf("<- %d\n", ft_printf("12chiffre 1 |%-5d| chiffre 2 |%-5d|", 42, -42));
	// ft_printf("---|%-10.5d|  |%-10.5d|\n", 4242, -4242);            
	// printf("   |%-10.5d|  |%-10.5d|\n", 4242, -4242);
	// ft_printf("---|%+10.5d|\n", 4242);            
	// printf("   |%+10.5d|\n", 4242);            
	// ft_printf("---|%-+10.5d|\n", 4242);           
	// printf("   |%-+10.5d|\n", 4242);
	// printf("<- %d\n", printf("13chiffre 1 |%-+05d| chiffre 2 |%-+05d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("13chiffre 1 |%-+05d| chiffre 2 |%-+05d|", 42, -42));
	// printf("<- %d\n", printf("14chiffre 1 |%+-5d| chiffre 2 |%+-5d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("14chiffre 1 |%+-5d| chiffre 2 |%+-5d|", 42, -42));
	// printf("<- %d\n", printf("15chiffre 1 |%.d| chiffre 2 |%.d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("15chiffre 1 |%.d| chiffre 2 |%.d|", 42, -42));
	// printf("<- %d\n", printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|", 0, -0));
	// ft_printf("<- %d\n", ft_printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|", 0, -0));
	// printf("<- %d\n", printf("16chiffre 1 |%+.6d| chiffre 2 |%+.6d|", 0, -0));
	// ft_printf("<- %d\n", ft_printf("16chiffre 1 |%+.6d| chiffre 2 |%+.6d|", 0, -0));
	// printf("<- %d\n", printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|", 0, -0));
	// ft_printf("<- %d\n", ft_printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|", 0, -0));
	// printf("<- %d\n", printf("16chiffre 1 |%.6x| chiffre 2 |%.6x|", 0, -0));
	// ft_printf("<- %d\n", ft_printf("16chiffre 1 |%.6x| chiffre 2 |%.6x|", 0, -0));
	// printf("<- %d\n", printf("16chiffre 1 |%5.x| chiffre 2 |%5.x|", 0, -0));
	// ft_printf("<- %d\n", ft_printf("16chiffre 1 |%5.x| chiffre 2 |%5.x|", 0, -0));
	// printf("<- %d\n", printf("16chiffre 1 |%#5.d| chiffre 2 |%#5.d|", 0, -0));
	// ft_printf("<- %d\n", ft_printf("16chiffre 1 |%#5.d| chiffre 2 |%#5.d|", 0, -0));
	// printf("<- %d\n", printf("16chiffre 1 |%#5.x| chiffre 2 |%#5.x|", 0, -0));
	// ft_printf("<- %d\n", ft_printf("16chiffre 1 |%#5.x| chiffre 2 |%#5.x|", 0, -0));
	// printf("<- %d\n", printf("16chiffre 1 |%#5.o| chiffre 2 |%#5.o|", 0, -0));
	// ft_printf("<- %d\n", ft_printf("16chiffre 1 |%#5.o| chiffre 2 |%#5.o|", 0, -0));

	// 	ft_printf("---|%+10x|\n", 42);
	// 	printf("   |%+10x|\n", 42);
		
	// 	ft_printf("---|%+-10x|\n", 42);
	// 	printf("   |%+-10x|\n", 42);

	// 	ft_printf("---|%+10x|\n", 42);
	// 	printf("   |%+10x|\n", 42);
		
	// 	ft_printf("---|%-10x|\n", 42);
	// 	printf("   |%-10x|\n", 42);
	
	// ft_printf("---|%jx|\n", 4294967295);
	// printf("   |%jx|\n", 4294967295);
	
	// ft_printf("---|%jx|\n", 4294967296);
	// printf("   |%jx|\n", 4294967296);
	
	// ft_printf("---|%jx|\n", -4294967296);
	// printf("   |%jx|\n", -4294967296);
	
	// ft_printf("---|%jx|\n", -4294967297);
	// printf("   |%jx|\n", -4294967297);
	
	// ft_printf("---|%-15x|\n", 542);
	// printf("   |%-15x|\n", 542);
	
	// ft_printf("---|%5.2x|\n", 5427);
	// printf("   |%5.2x|\n", 5427);
	
	// ft_printf("---|%#08x|\n", 42);
	// printf("   |%#08x|\n", 42);
	
	// ft_printf("X--@moulitest: |%#x| |%#0x|\n", 0, 0);
	// printf("   @moulitest: |%#x| |%#0x|\n", 0, 0);

	// ft_printf("X--@moulitest: |%#5.x| |%#5.0x|\n", 0, 0);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.x| |%#5.0x|\n", 0, 0);

	// ft_printf("X--@moulitest: |%#5.1x| |%#5.1x|\n", 0, 0);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.1x| |%#5.1x|\n", 0, 0);

	// ft_printf("X--@moulitest: |%#5.x| |%#5.0x|\n", 42, 42);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.x| |%#5.0x|\n", 42, 42);

	// ft_printf("X--@moulitest: |%#5.1x| |%#5.1x|\n", 42, 42);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.1x| |%#5.1x|\n", 42, 42);

	
	// ft_printf("D--@moulitest: |%#d| |%#0d|\n", 0, 0);
	// printf("   @moulitest: |%#d| |%#0d|\n", 0, 0);

	// ft_printf("X--@moulitest: |%#5.d| |%#5.0d|\n", 0, 0);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.d| |%#5.0d|\n", 0, 0);

	// ft_printf("X--@moulitest: |%#5.1d| |%#5.1d|\n", 0, 0);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.1d| |%#5.1d|\n", 0, 0);

	// ft_printf("X--@moulitest: |%#5.d| |%#5.0d|\n", 42, 42);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.d| |%#5.0d|\n", 42, 42);

	// ft_printf("X--@moulitest: |%#5.1d| |%#5.1d|\n", 42, 42);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.1d| |%#5.1d|\n", 42, 42);

	// 	ft_printf("O--@moulitest: |%#o| |%#0o|\n", 0, 0);
	// printf("   @moulitest: |%#o| |%#0o|\n", 0, 0);

	// ft_printf("X--@moulitest: |%#5.o| |%#5.0o|\n", 0, 0);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.o| |%#5.0o|\n", 0, 0);

	// ft_printf("X--@moulitest: |%5.o| |%5.0o|\n", 0, 0);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%5.o| |%5.0o|\n", 0, 0);

	// 	ft_printf("X--@moulitest: |%#5.d| |%#5.0d|\n", 0, 0);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.d| |%#5.0d|\n", 0, 0);

	// 		ft_printf("X--@moulitest: |%#5.x| |%#5.0x|\n", 0, 0);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.x| |%#5.0x|\n", 0, 0);

	// 	ft_printf("---|@moulitest: %.o %.0o|\n", 0, 0);  
	// printf("   |@moulitest: %.o %.0o|\n", 0, 0);  
	// ft_printf("---|@moulitest: %5.o %5.0o|\n", 0, 0);
	// printf("   |@moulitest: %5.o %5.0o|\n", 0, 0);

	// ft_printf("X--@moulitest: |%#5.1o| |%#5.1o|\n", 0, 0);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.1o| |%#5.1o|\n", 0, 0);

	// ft_printf("X--@moulitest: |%#5.o| |%#5.0o|\n", 42, 42);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.o| |%#5.0o|\n", 42, 42);

	// ft_printf("X--@moulitest: |%#5.1o| |%#5.1o|\n", 42, 42);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.1o| |%#5.1o|\n", 42, 42);

	// ft_printf("X--@moulitest: |%#5.1x| |%#5.1x|\n", 42, 42);
	// // printf("012345678901234567890123456789\n");
	// printf("   @moulitest: |%#5.1x| |%#5.1x|\n", 42, 42);

	// ft_printf("X--@moulitest: |%#5.x| |%#5.0x|\n", 0, 0);
	// printf("   @moulitest: |%#5.x| |%#5.0x|\n", 0, 0);
	// ft_printf("X--@moulitest: %#.o %#.0o\n", 0, 0);
	// printf("   @moulitest: %#.o %#.0o\n", 0, 0);
	// ft_printf("X--@moulitest: %#.d %#.0d\n", 0, 0);
	// printf("   @moulitest: %#.d %#.0d\n", 0, 0);
	// ft_printf("@moulitest: |%#.c| |%#.0c|\n", 0, 0);
	// printf("@moulitest: |%#.c| |%#.0c|\n", 0, 0);
	
	// ft_printf("---@moulitest: |%.x| |%.0x|\n", 0, 0);
	// printf("   @moulitest: |%.x| |%.0x|\n", 0, 0);
	
	// ft_printf("---@moulitest: |%5.x| |%5.0x|\n", 0, 0);
	// printf("   @moulitest: |%5.x| |%5.0x|\n", 0, 0);
	
	// ft_printf("---|%5.2s| is a string|\n", "this");
	// printf("   |%5.2s| is a string|\n", "this");
	
	// ft_printf("---|%.2c|\n", NULL);
	// printf("   |%.2c|\n", NULL);
	
	// ft_printf("---@moulitest: |%c|\n", 0);
	// printf("   @moulitest: |%c|\n", 0);
	
	// ft_printf("---|%2c|\n", 0);
	// printf("   |%2c|\n", 0);
	
	// ft_printf("---null |%c| and text|\n", 0);
	// printf("   null |%c| and text|\n", 0);
	
	// ft_printf("---|% c|\n", 0);
	// printf("   |% c|\n", 0);
	
	// ft_printf("---@moulitest: |%.o| |%.0o|\n", 0, 0);
	// printf("   @moulitest: |%.o| |%.0o|\n", 0, 0);
	
	// ft_printf("---@moulitest: |%5.o| |%5.0o|\n", 0, 0);
	// printf("   @moulitest: |%5.o| |%5.0o|\n", 0, 0);
	


	// ft_printf("---|%+10d|\n", -42);
	// printf("   |%+10d|\n", -42);
	// ft_printf("---|%+10d|\n", +42);
	// printf("   |%+10d|\n", +42);
	
	// ft_printf("---|%jd|\n", 9223372036854775807);
	// printf("   |%jd|\n", 9223372036854775807);
	
	// ft_printf("---|%jd|\n", -9223372036854775808);
	// printf("   |%jd|\n", -9223372036854775808);
	
	// ft_printf("---|% 10.5d|\n", 4242);
	// printf("   |% 10.5d|\n", 4242);
	
	// ft_printf("---|%05d|\n", -42);
	// printf("   |%05d|\n", -42);

	// ft_printf("---|%03.2d|\n", 0);
	// printf("   |%03.2d|\n", 0);
	
	// ft_printf("---|%03.2o|\n", 0);
	// printf("   |%03.2o|\n", 0);
	
	// ft_printf("---|%03.2x|\n", 0);
	// printf("   |%03.2x|\n", 0);
	// ft_printf("---|%03.2d|\n", 1);
	// printf("   |%03.2d|\n", 1);
	// ft_printf("---|%03.2o|\n", 1);
	// printf("   |%03.2o|\n", 1);
	// ft_printf("---|%03.2x|\n", 1);
	// printf("   |%03.2x|\n", 1);
	
	// ft_printf("---|%03.2d|\n", 1);
	// printf("   |%03.2d|\n", 1);
	
	// ft_printf("---|%010.5d|\n", -1);
	// printf("   |%010.5d|\n", -1);

	// ft_printf("---|%-010.5d|\n", -1);
	// printf("   |%-010.5d|\n", -1);

	// ft_printf("---|%010d|\n", -1);
	// printf("   |%010d|\n", -1);

	// ft_printf("---|%-10.5d|\n", -1);
	// printf("   |%-10.5d|\n", -1);

	// ft_printf("---|% 10.5d|\n", -1);
	// printf("   |% 10.5d|\n", -1);
	
	// ft_printf("---@moulitest: |%.d| |%.0d|\n", 0, 0);
	// printf("   @moulitest: |%.d| |%.0d|\n", 0, 0);
	
	// ft_printf("---@moulitest: |%5.d| |%5.0d|\n", 0, 0);
	// printf("   @moulitest: |%5.d| |%5.0d|\n", 0, 0);

	// 	ft_printf("---@moulitest: |%.d| |%.0d|\n", 0, 0);
	// printf("   @moulitest: |%.d| |%.0d|\n", 0, 0);
	
	// ft_printf("---@moulitest: |%5.d| |%5.0d|\n", 0, 0);
	// printf("   @moulitest: |%5.d| |%5.0d|\n", 0, 0);
	
	// ft_printf("---|%ju|\n", 4999999999);
	// printf("   |%ju|\n", 4999999999);
	
	// ft_printf("---|%ju|\n", 4294967296);
	// printf("   |%ju|\n", 4294967296);
	
	// ft_printf("---|%U|\n", 4294967295);
	// printf("   |%U|\n", 4294967295);
	
	// ft_printf("---|%hU|\n", 4294967296);
	// printf("   |%hU|\n", 4294967296);
	
	// ft_printf("---|%U|\n", 4294967296);
	// printf("   |%U|\n", 4294967296);


	//    	printf("OOOOOOOOOOo\n");
	// ft_printf("<-%d\n",ft_printf("     1octal 1 |%o| octal 2 |%o|", 42, -42));
	// printf("<-%d\n", printf("prtf 1octal 1 |%o| octal 2 |%o|", 42, -42));
	// ft_printf("<-%d\n",ft_printf("     2octal 1 |%   o| octal 2 |% o|", 42, -42));
	// printf("<-%d\n", printf("prtf 2octal 1 |%   o| octal 2 |% o|", 42, -42));
	// ft_printf("<-%d\n",ft_printf("     2octal 1 |%   d| octal 2 |% d|", 42, -42));
	// printf("<-%d\n", printf("prtf 2octal 1 |%   d| octal 2 |% d|", 42, -42));
	// ft_printf("<-%d\n",ft_printf("     3octal 1 |%12o| octal 2 |%12o|", 42, -42));
	// printf("<-%d\n", printf("prtf 3octal 1 |%12o| octal 2 |%12o|", 42, -42));
	// ft_printf("<-%d\n",ft_printf("     4octal 1 |%-12o| octal 2 |%-12o|", 42, -42));
	// printf("<-%d\n", printf("prtf 4octal 1 |%-12o| octal 2 |%-12o|", 42, -42));
	// ft_printf("<-%d\n",ft_printf("     5octal 1 |%0o| octal 2 |%0o|", 42, -42));
	// printf("<-%d\n", printf("prtf 5octal 1 |%0o| octal 2 |%0o|", 42, -42));
	// ft_printf("<-%d\n",ft_printf("     6octal 1 |%012o| octal 2 |%012o|", 42, -42));
	// printf("<-%d\n", printf("prtf 6octal 1 |%012o| octal 2 |%012o|", 42, -42));

	// ft_printf("<-%d\n",ft_printf("     7octal 1 |%-012o| octal 2 |%012o|", 42, -42));
	// printf("<-%d\n", printf("prtf 7octal 1 |%-012o| octal 2 |%012o|", 42, -42));
	// ft_printf("<-%d\n",ft_printf("     8octal 1 |%*o| octal 2 |%*o|", 42, 6, 6, 6));
	// printf("<-%d\n", printf("prtf 8octal 1 |%*o| octal 2 |%*o|", 42, 6, 6, 6));
	// ft_printf("<-%d\n",ft_printf("     9octal 1 |%+o| octal 2 |%+o|", 42, 6, -42, 6));
	// printf("<-%d\n", printf("prtf 9octal 1 |%+o| octal 2 |%+o|", 42, 6, -42, 6));
	// ft_printf("<-%d\n",ft_printf("     10octal 1 |%+12o| octal 2 |%+12o|", 42, 6, -42, 6));
	// printf("<-%d\n", printf("prtf 10octal 1 |%+12o| octal 2 |%+12o|", 42, 6, -42, 6));
	// ft_printf("<-%d\n",ft_printf("     1@octal 1 |%-+12o| octal 2 |%-+12o|", 42, 6, -42, 6));
	// printf("<-%d\n", printf("prtf 1@octal 1 |%-+12o| octal 2 |%-+12o|", 42, 6, -42, 6));
	// ft_printf("<-%d\n",ft_printf("     11octal 1 |%*12o| octal 2 |%*12o|", 42, -6, 42, 6));
	// printf("<-%d\n", printf("prtf 11octal 1 |%*12o| octal 2 |%*12o|", 42, -6, 42, 6));
	// ft_printf("<-%d\n",ft_printf("     12octal 1 |%-+5o| octal 2 |%-+5o|", 42, -42));
	// printf("<-%d\n", printf("prtf 12octal 1 |%-+5o| octal 2 |%-+5o|", 42, -42));
	// ft_printf("<-%d\n",ft_printf("     13octal 1 |%-+05o| octal 2 |%-+05o|", 42, -42));
	// printf("<-%d\n", printf("prtf 13octal 1 |%-+05o| octal 2 |%-+05o|", 42, -42));
	// ft_printf("<-%d\n",ft_printf("     14octal 1 |%+-5o| octal 2 |%+-5o|", 42, -42));
	// printf("<-%d\n", printf("prtf 14octal 1 |%+-5o| octal 2 |%+-5o|", 42, -42));
	// ft_printf("<-%d\n",ft_printf("     15octal 1 |%.o| octal 2 |%.o|", 42, -42));
	// printf("<-%d\n", printf("prtf 15octal 1 |%.o| octal 2 |%.o|", 42, -42));
	// ft_printf("<-%d\n",ft_printf("     16octal 1 |%.6o| octal 2 |%.6o|", 42, -42));
	// printf("<-%d\n", printf("prtf 16octal 1 |%.6o| octal 2 |%.6o|", 42, -42));
	// ft_printf("---|%+#6o|\n", 2500);           
	// printf("   |%+#6o|\n", 2500);
	// ft_printf("---|%+6o|\n", 2500);           
	// printf("   |%+6o|\n", 2500);
	// ft_printf("---|%6o|\n", 2500);           
	// printf("   |%6o|\n", 2500);
	// ft_printf("---|%#o|\n", 2500);           
	// printf("   |%#o|\n", 2500);    
	// ft_printf("---|%-#6o|\n", 2500);          
	// printf("   |%-#6o|\n", 2500);          
	// ft_printf("---|%-5.10o|\n", 2500);            
	// printf("   |%-5.10o|\n", 2500);            
	// ft_printf("---|%-10.5o|\n", 2500);            
	// printf("   |%-10.5o|\n", 2500);            
	// ft_printf("---|@moulitest: %.o %.0o|\n", 0, 0);  
	// printf("   |@moulitest: %.o %.0o|\n", 0, 0);  
	// ft_printf("---|@moulitest: %5.o %5.0o|\n", 0, 0);
	// printf("   |@moulitest: %5.o %5.0o|\n", 0, 0);

	// printf("SSSSSSSSSSSSSSSSSSSSS\n");
	// printf("<- %d\n", printf("1string 1 |%s| string 2 |%s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("1string 1 |%s| string 2 |%s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("2string 1 |%   s| string 2 |% s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("2string 1 |%   s| string 2 |% s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("3string 1 |%12s| string 2 |%12s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("3string 1 |%12s| string 2 |%12s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("4string 1 |%-12s| string 2 |%-12s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("4string 1 |%-12s| string 2 |%-12s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("5string 1 |%0s| string 2 |%0s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("5string 1 |%0s| string 2 |%0s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("6string 1 |%012s| string 2 |%012s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("6string 1 |%012s| string 2 |%012s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("7string 1 |%-012s| string 2 |%012s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("7string 1 |%-012s| string 2 |%012s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("12string 1 |%-+5s| string 2 |%-+5s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("12string 1 |%-+5s| string 2 |%-+5s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("13string 1 |%-+05s| string 2 |%-+05s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("13string 1 |%-+05s| string 2 |%-+05s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("14string 1 |%+-5s| string 2 |%+-5s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("14string 1 |%+-5s| string 2 |%+-5s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("15string 1 |%s| string 2 |%s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("15string 1 |%s| string 2 |%s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("16string 1 |%.s| string 2 |%.s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("16string 1 |%.s| string 2 |%.s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("17string 1 |%.5s| string 2 |%.5s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("17string 1 |%.5s| string 2 |%.5s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("18string 1 |%5s| string 2 |%5s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("18string 1 |%5s| string 2 |%5s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("19string 1 |%5.s| string 2 |%5.s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("19string 1 |%5.s| string 2 |%5.s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("20string 1 |%5.5s| string 2 |%5.5s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("20string 1 |%5.5s| string 2 |%5.5s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("21string 1 |%.10s| string 2 |%.10s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("21string 1 |%.10s| string 2 |%.10s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("22string 1 |%10s| string 2 |%10s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("22string 1 |%10s| string 2 |%10s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("23string 1 |%10.s| string 2 |%10.s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("23string 1 |%10.s| string 2 |%10.s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("24string 1 |%10.5s| string 2 |%10.5s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("24string 1 |%10.5s| string 2 |%10.5s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("25string 1 |%10.10s| string 2 |%10.10s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("25string 1 |%10.10s| string 2 |%10.10s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("17string 1 |%5.0s| string 2 |%5.0s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("17string 1 |%5.0s| string 2 |%5.0s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("17string 1 |%.6s| string 2 |%.6s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("17string 1 |%.6s| string 2 |%.6s|", "toto", "bonjour"));

	// 	printf("CCCCCCCCCCCCCCCCCC\n");
	// printf("1caractere 1 |%c| caractere 2 |%c|\n", 'a', 'c');
	// ft_printf("1caractere 1 |%c| caractere 2 |%c|\n\n", 'a', 'c');
	// printf("2caractere 1 |%   c| caractere 2 |% c|\n", 'a', 'c');
	// ft_printf("3caractere 1 |%   c| caractere 2 |% c|\n\n", 'a', 'c');
	// printf("4caractere 1 |%12c| caractere 2 |%12c|\n", 'a', 'c');
	// ft_printf("4caractere 1 |%12c| caractere 2 |%12c|\n\n", 'a', 'c');
	// printf("4caractere 1 |%-12c| caractere 2 |%-12c|\n", 'a', 'c');
	// ft_printf("4caractere 1 |%-12c| caractere 2 |%-12c|\n\n", 'a', 'c');
	// printf("5caractere 1 |%0c| caractere 2 |%0c|\n", 'a', 'c');
	// ft_printf("5caractere 1 |%0c| caractere 2 |%0c|\n\n", 'a', 'c');
	// printf("6caractere 1 |%012c| caractere 2 |%012c|\n", 'a', 'c');
	// ft_printf("6caractere 1 |%012c| caractere 2 |%012c|\n\n", 'a', 'c');
	// printf("7caractere 1 |%-012c| caractere 2 |%012c|\n", 'a', '|c');
	// ft_printf("7caractere 1 |%-012c| caractere 2 |%012c|\n\n", 'a', 'c');
	// printf("8caractere 1 |%*c| caractere 2 |%*c|\n", 'a', 6, 6, 6);
	// ft_printf("8caractere 1 |%*c| caractere 2 |%*c|\n\n", 'a', 6, 6, 6);
	// printf("9caractere 1 |%+c| caractere 2 |%+c|\n", 'a', 6, 'c', 6);
	// ft_printf("9caractere 1 |%+c| caractere 2 |%+c|\n\n", 'a', 6, 'c', 6);
	// printf("10caractere 1 |%+12c| caractere 2 |%+12c|\n", 'a', 6, 'c', 6);
	// ft_printf("10caractere 1 |%+12c| caractere 2 |%+12c|\n\n", 'a', 6, 'c', 6);
	// printf("11caractere 1 |%*12c| caractere 2 |%*12c|\n", 'a', -6, 'a', 6);
	// ft_printf("11caractere 1 |%*12c| caractere 2 |%*12c|\n\n", 'a', -6, 'a', 6);
	// printf("12caractere 1 |%-+5c| caractere 2 |%-+5c|\n", 'a', 'c');
	// ft_printf("12caractere 1 |%-+5c| caractere 2 |%-+5c|\n\n", 'a', 'c');
	// printf("13caractere 1 |%-+05c| caractere 2 |%-+05c|\n", 'a', 'c');
	// ft_printf("13caractere 1 |%-+05c| caractere 2 |%-+05c|\n\n", 'a', 'c');
	// printf("14caractere 1 |%+-5c| caractere 2 |%+-5c|\n", 'a', 'c');
	// ft_printf("14caractere 1 |%+-5c| caractere 2 |%+-5c|\n\n", 'a', 'c');
	// printf("15caractere 1 |%.c| caractere 2 |%.c|\n", 'a', 'c');
	// ft_printf("15caractere 1 |%.c| caractere 2 |%.c|\n\n", 'a', 'c');
	// printf("16caractere 1 |%.6c| caractere 2 |%.6c|\n", 'a', 'c');
	// ft_printf("16caractere 1 |%.6c| caractere 2 |%.6c|\n\n", 'a', 'c');

	// ft_printf("|%%|\n");              
	// printf("|%%|\n");              
	// ft_printf("|%5%|\n");                 
	// printf("|%5%|\n");                 
	// ft_printf("|%-5%|\n");                
	// printf("|%-5%|\n");                
	// ft_printf("|%.1%|\n");            
	// printf("|%.1%|\n");
	// printf("<- %d\n", printf("16string 1 |%.6s| string 2 |%.6s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("16string 1 |%.6s| string 2 |%.6s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("16string 1 |%.0s| string 2 |%.0s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("16string 1 |%.0s| string 2 |%.0s|", "toto", "bonjour"));     
	// ft_printf("|%%|\n", "test");      
	// printf("|%%|\n", "test");      
	// ft_printf("|%   %|\n", "test");   
	// printf("|%   %|\n", "test");   
	// ft_printf("1|%jx|\n", 4294967295);        
	// printf("1|%jx|\n", 4294967295);        
	// ft_printf("2|%jx|\n", 4294967296);         
	// printf("2|%jx|\n", 4294967296);         
	// ft_printf("3|%jx|\n", -4294967296);               
	// printf("3|%jx|\n", -4294967296);               
	// ft_printf("4|%jx|\n", -4294967297);               
	// printf("4|%jx|\n", -4294967297);               
	// ft_printf("5|%#8x|\n", 42);               
	// printf("5|%#8x|\n", 42);               
	// ft_printf("|%#08x|\n", 42);              
	// printf("6|%#08x|\n", 42);              
	// ft_printf("6|%#-08x|\n", 42);             
	// printf("6|%#-08x|\n", 42);
	// printf("4 --- |%20|\n", 9223372036854775807);
    // ft_printf(" +++ |%20|\n", 9223372036854775807);      
	// ft_printf("---|@moulitest: |%#.x| |%#.0x|\n", 42, -42);
	// printf("   |@moulitest: |%#.x| |%#.0x|\n", 42, -42);
	// ft_printf("---|@moulitest: |%.x| |%.0x|\n", 42, -42);  
	// printf("   |@moulitest: |%.x| |%.0x|\n", 42, -42);  
	// ft_printf("--i|@moulitest: |%5.x| |%5.0x|\n", 42, -42);
	// printf("   |@moulitest: |%5.x| |%5.0x|\n", 42, -42);
	// ft_printf("---|@moulitest: |%#.d| |%#.0d|\n", 42, -42);
	// printf("   |@moulitest: |%#.d| |%#.0d|\n", 42, -42);
	// ft_printf("---|@moulitest: |%.d| |%.0d|\n", 42, -42);  
	// printf("   |@moulitest: |%.d| |%.0d|\n", 42, -42);  
	// ft_printf("--i|@moulitest: |%5.d| |%5.0d|\n", 42, -42);
	// printf("   |@moulitest: |%5.d| |%5.0d|\n", 42, -42);
	// printf("<- %d\n", printf("15chiffre 1 |%.d| chiffre 2 |%.d|", 42, -42));
	// ft_printf("<- %d\n", ft_printf("15chiffre 1 |%.d| chiffre 2 |%.d|", 42, -42));
	// printf("<- %d\n", printf("1string 1 |%s| string 2 |%s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("1string 1 |%s| string 2 |%s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("2string 1 |%   s| string 2 |% s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("2string 1 |%   s| string 2 |% s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("3string 1 |%12s| string 2 |%12s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("3string 1 |%12s| string 2 |%12s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("4string 1 |%-12s| string 2 |%-12s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("4string 1 |%-12s| string 2 |%-12s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("5string 1 |%0s| string 2 |%0s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("5string 1 |%0s| string 2 |%0s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("6string 1 |%012s| string 2 |%012s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("6string 1 |%012s| string 2 |%012s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("7string 1 |%-012s| string 2 |%012s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("7string 1 |%-012s| string 2 |%012s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("12string 1 |%-+5s| string 2 |%-+5s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("12string 1 |%-+5s| string 2 |%-+5s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("13string 1 |%-+05s| string 2 |%-+05s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("13string 1 |%-+05s| string 2 |%-+05s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("14string 1 |%+-5s| string 2 |%+-5s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("14string 1 |%+-5s| string 2 |%+-5s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("15string 1 |%.s| string 2 |%.s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("15string 1 |%.s| string 2 |%.s|", "toto", "bonjour"));
	// printf("<- %d\n", printf("16string 1 |%.6s| string 2 |%.6s|", "toto", "bonjour"));
	// ft_printf("<- %d\n", ft_printf("16string 1 |%.6s| string 2 |%.6s|", "toto", "bonjour"));
	//  	printf("DDDDDDDDDDDDDDDDDDDDD\n");
	//  printf("<- %d\n", printf("1chiffre 1 |%d| chiffre 2 |%d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("1chiffre 1 |%d| chiffre 2 |%d|", 42, -42));
	//  printf("<- %d\n", printf("2chiffre 1 |%   d| chiffre 2 |% d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("2chiffre 1 |%   d| chiffre 2 |% d|", 42, -42));
	//  printf("<- %d\n", printf("3chiffre 1 |%12d| chiffre 2 |%12d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("3chiffre 1 |%12d| chiffre 2 |%12d|", 42, -42));
	//  printf("<- %d\n", printf("4chiffre 1 |%-12d| chiffre 2 |%-12d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("4chiffre 1 |%-12d| chiffre 2 |%-12d|", 42, -42));
	//  printf("<- %d\n", printf("5chiffre 1 |%0d| chiffre 2 |%0d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("5chiffre 1 |%0d| chiffre 2 |%0d|", 42, -42));
	//  printf("<- %d\n", printf("6chiffre 1 |%012d| chiffre 2 |%012d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("6chiffre 1 |%012d| chiffre 2 |%012d|", 42, -42));
	//  printf("<- %d\n", printf("7chiffre 1 |%-012d| chiffre 2 |%012d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("7chiffre 1 |%-012d| chiffre 2 |%012d|", 42, -42));
	//  printf("<- %d\n", printf("8chiffre 1 |%*d| chiffre 2 |%*d|", 42, 6, 6, 6));
	//  ft_printf("<- %d\n", ft_printf("8chiffre 1 |%*d| chiffre 2 |%*d|", 42, 6, 6, 6));
	//  printf("<- %d\n", printf("9chiffre 1 |%+d| chiffre 2 |%+d|", 42, 6, -42, 6));
	//  ft_printf("<- %d\n", ft_printf("9chiffre 1 |%+d| chiffre 2 |%+d|", 42, 6, -42, 6));
	// printf("<- %d\n", printf("10chiffre 1 |%+12d| chiffre 2 |%+12d|", 42, 6, -42, 6));
	// ft_printf("<- %d\n", ft_printf("10chiffre 1 |%+12d| chiffre 2 |%+12d|", 42, 6, -42, 6));
	//  printf("<- %d\n", printf("11chiffre 1 |%*12d| chiffre 2 |%*12d|", 42, -6, 42, 6));
	//  ft_printf("<- %d\n", ft_printf("11chiffre 1 |%*12d| chiffre 2 |%*12d|", 42, -6, 42, 6));
	//  printf("<- %d\n", printf("12chiffre 1 |%-+5d| chiffre 2 |%-+5d|", 42, -42));
	//  printf("<- %d\n", ft_printf("12chiffre 1 |%-+5d| chiffre 2 |%-+5d|", 42, -42));
	//  printf("<- %d\n", printf("12chiffre 1 |%-5d| chiffre 2 |%-5d|", 42, -42));
	//  printf("<- %d\n", ft_printf("12chiffre 1 |%-5d| chiffre 2 |%-5d|", 42, -42));
	//  ft_printf("---|%-10.5d|  |%-10.5d|\n", 4242, -4242);            
	// printf("   |%-10.5d|  |%-10.5d|\n", 4242, -4242);
	// ft_printf("---|%+10.5d|\n", 4242);            
	// printf("   |%+10.5d|\n", 4242);            
	// ft_printf("---|%-+10.5d|\n", 4242);           
	// printf("   |%-+10.5d|\n", 4242);
	//  printf("<- %d\n", printf("13chiffre 1 |%-+05d| chiffre 2 |%-+05d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("13chiffre 1 |%-+05d| chiffre 2 |%-+05d|", 42, -42));
	//  printf("<- %d\n", printf("14chiffre 1 |%+-5d| chiffre 2 |%+-5d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("14chiffre 1 |%+-5d| chiffre 2 |%+-5d|", 42, -42));
	//  printf("<- %d\n", printf("15chiffre 1 |%.d| chiffre 2 |%.d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("15chiffre 1 |%.d| chiffre 2 |%.d|", 42, -42));
	//  printf("<- %d\n", printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("16chiffre 1 |%.6d| chiffre 2 |%.6d|", 42, -42));
	//   printf("<- %d\n", printf("16chiffre 1 |%+.6d| chiffre 2 |%+.6d|", 42, -42));
	//  ft_printf("<- %d\n", ft_printf("16chiffre 1 |%+.6d| chiffre 2 |%+.6d|", 42, -42));
	//  ft_printf("---|%5.2s is a string|\n", "this");       
	//  printf("   |%5.2s is a string|\n", "this");       
	//  ft_printf("---|%-5.2s is a string|\n", "this");      
	//  printf("   |%-5.2s is a string|\n", "this");      
	//  ft_printf("---|@moulitest: %s|\n", NULL);
	//  printf("   |@moulitest: %s|\n", NULL);
	// ft_printf("---|%c|\n", NULL);       
	//  printf("   |%c|\n", NULL);
	//  ft_printf("---|%.2c|\n", NULL);       
	//  printf("   |%.2c|\n", NULL);       
	// ft_printf("---|%s %s|\n", NULL, string);         
	// printf("   |%s %s|\n", NULL, string);         
	// ft_printf("---|@moulitest: %c|\n", 0);            
	// printf("   |@moulitest: %c|\n", 0);            
	// ft_printf("---|%5c|\n", 0);            
	// printf("   |%5c|\n", 0);            
	// ft_printf("---|null %c and text|\n", 0);            
	// printf("   |null %c and text|\n", 0);            
	// ft_printf("---|% c|\n", 0);           
	// printf("   |% c|\n", 0);           
	// ft_printf("---|%lld|\n", 9223372036854775807); 
	// printf("   |%lld|\n", 9223372036854775807); 
	// ft_printf("---|%jd|\n", 9223372036854775807);
	// printf("   |%jd|\n", 9223372036854775807);
	// ft_printf("---|%jd|\n", -9223372036854775808);
	// printf("   |%jd|\n", -9223372036854775808);
	// ft_printf("---|%zd|\n", 4294967295);          
	// printf("   |%zd|\n", 4294967295);          
	// ft_printf("---|%zd|\n", 4294967296);          
	// printf("   |%zd|\n", 4294967296);          
	// ft_printf("---|%zd|\n", -0);         
	// printf("  i|%zd|\n", -0);         
	// ft_printf("---|%zd|\n", -1);          
	// printf("   |%zd|\n", -1);          
	// ft_printf("---|%-10.5d|  |%-10.5d|\n", 4242, -4242);            
	// printf("   |%-10.5d|  |%-10.5d|\n", 4242, -4242);
	// ft_printf("---|%+10.5d|\n", 4242);            
	// printf("   |%+10.5d|\n", 4242);            
	// ft_printf("---|%-+10.5d|\n", 4242);           
	// printf("   |%-+10.5d|\n", 4242);           
	// ft_printf("---|@moulitest: %.d %.0d|\n", 0, 0);  
	// printf("   |@moulitest: %.d %.0d|\n", 0, 0);  
	// ft_printf("---|@moulitest: |%5.d| |%5.0d|\n", 0, 0);
	// printf("   |@moulitest: |%5.d| |%5.0d|\n", 0, 0);
	// ft_printf("---|%ju|\n", 4999999999);          
	// printf("   |%ju|\n", 4999999999);          
	// ft_printf("---|%ju|\n", 4294967296);          
	// printf("   |%ju|\n", 4294967296);          
	// ft_printf("---|%U|\n", 4294967295);           
	// printf("   |%U|\n", 4294967295);           
	// ft_printf("---|%hU|\n", 4294967296);          
	// printf("   |%hU|\n", 4294967296);          
	// ft_printf("---|%U|\n", 4294967296);

//   ft_printf("%d\n", ft_printf("%#o\n", 42));
//   printf("%d\n\n", printf("%#o\n", 42));

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
    

	return (0);
}
