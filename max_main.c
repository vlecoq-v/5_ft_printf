/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/18 18:32:45 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define STR "non pas |%d mais bien |%d ZBOUB\n"

int	main(void)
{
	char string[] = "hello";

	ft_printf("|%%|\n");              
	printf("|%%|\n");              
	ft_printf("|%5%|\n");                 
	printf("|%5%|\n");                 
	ft_printf("|%-5%|\n");                
	printf("|%-5%|\n");                
	ft_printf("|%.0%|\n");            
	printf("|%.0%|\n");            
	ft_printf("|%%|\n", "test");      
	printf("|%%|\n", "test");      
	ft_printf("|%   %|\n", "test");   
	printf("|%   %|\n", "test");   
	ft_printf("|%jx|\n", 4294967295);        
	printf("|%jx|\n", 4294967295);        
	ft_printf("|%jx|\n", 4294967296);         
	printf("|%jx|\n", 4294967296);         
	ft_printf("|%jx|\n", -4294967296);               
	printf("|%jx|\n", -4294967296);               
	ft_printf("|%jx|\n", -4294967297);               
	printf("|%jx|\n", -4294967297);               
	ft_printf("|%#8x|\n", 42);               
	printf("|%#8x|\n", 42);               
	ft_printf("|%#08x|\n", 42);              
	printf("|%#08x|\n", 42);              
	ft_printf("|%#-08x|\n", 42);             
	printf("|%#-08x|\n", 42);             
	ft_printf("|@moulitest: %#.x %#.0x|\n", 0, 0);
	printf("|@moulitest: %#.x %#.0x|\n", 0, 0);
	ft_printf("|@moulitest: %.x %.0x|\n", 0, 0);  
	printf("|@moulitest: %.x %.0x|\n", 0, 0);  
	ft_printf("|@moulitest: %5.x %5.0x|\n", 0, 0);
	printf("|@moulitest: %5.x %5.0x|\n", 0, 0);
	ft_printf("|%5.2s is a string|\n", "this");       
	printf("|%5.2s is a string|\n", "this");       
	ft_printf("|%-5.2s is a string|\n", "this");      
	printf("|%-5.2s is a string|\n", "this");      
	ft_printf("|@moulitest: %s|\n", NULL);
	printf("|@moulitest: %s|\n", NULL);
	ft_printf("|%.2c|\n", NULL);       
	printf("|%.2c|\n", NULL);       
	ft_printf("|%s %s|\n", NULL, string);         
	printf("|%s %s|\n", NULL, string);         
	ft_printf("|@moulitest: %c|\n", 0);            
	printf("|@moulitest: %c|\n", 0);            
	ft_printf("|%2c|\n", 0);            
	printf("|%2c|\n", 0);            
	ft_printf("|null %c and text|\n", 0);            
	printf("|null %c and text|\n", 0);            
	ft_printf("|% c|\n", 0);           
	printf("|% c|\n", 0);           
	ft_printf("|%#6o|\n", 2500);           
	printf("|%#6o|\n", 2500);           
	ft_printf("|%-#6o|\n", 2500);          
	printf("|%-#6o|\n", 2500);          
	ft_printf("|%-5.10o|\n", 2500);            
	printf("|%-5.10o|\n", 2500);            
	ft_printf("|%-10.5o|\n", 2500);            
	printf("|%-10.5o|\n", 2500);            
	ft_printf("|@moulitest: %.o %.0o|\n", 0, 0);  
	printf("|@moulitest: %.o %.0o|\n", 0, 0);  
	ft_printf("|@moulitest: %5.o %5.0o|\n", 0, 0);
	printf("|@moulitest: %5.o %5.0o|\n", 0, 0);
	ft_printf("|%lld|\n", 9223372036854775807); 
	printf("|%lld|\n", 9223372036854775807); 
	ft_printf("|%jd|\n", 9223372036854775807);
	printf("|%jd|\n", 9223372036854775807);
	ft_printf("|%jd|\n", -9223372036854775808);
	printf("|%jd|\n", -9223372036854775808);
	ft_printf("|%zd|\n", 4294967295);          
	printf("|%zd|\n", 4294967295);          
	ft_printf("|%zd|\n", 4294967296);          
	printf("|%zd|\n", 4294967296);          
	ft_printf("|%zd|\n", -0);         
	printf("|%zd|\n", -0);         
	ft_printf("|%zd|\n", -1);          
	printf("|%zd|\n", -1);          
	ft_printf("|%-10.5d|\n", 4242);            
	printf("|%-10.5d|\n", 4242);            
	ft_printf("|%+10.5d|\n", 4242);            
	printf("|%+10.5d|\n", 4242);            
	ft_printf("|%-+10.5d|\n", 4242);           
	printf("|%-+10.5d|\n", 4242);           
	ft_printf("|@moulitest: %.d %.0d|\n", 0, 0);  
	printf("|@moulitest: %.d %.0d|\n", 0, 0);  
	ft_printf("|@moulitest: %5.d %5.0d|\n", 0, 0);
	printf("|@moulitest: %5.d %5.0d|\n", 0, 0);
	ft_printf("|%ju|\n", 4999999999);          
	printf("|%ju|\n", 4999999999);          
	ft_printf("|%ju|\n", 4294967296);          
	printf("|%ju|\n", 4294967296);          
	ft_printf("|%U|\n", 4294967295);           
	printf("|%U|\n", 4294967295);           
	ft_printf("|%hU|\n", 4294967296);          
	printf("|%hU|\n", 4294967296);          
	ft_printf("|%U|\n", 4294967296);           


	return (0);
}
