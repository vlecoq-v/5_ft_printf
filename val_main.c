/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:57:29 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/15 18:19:09 by vlecoq-v         ###   ########.fr       */
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
	void		*s;
	int			dup;
	int			*ptr2;

	i = 5876651234;

	conv->arg = i;
	conv->tp = 'X';
	conv->sz_tp[0] = NULL;
	dup = -42;
	// ft_strcpy(conv->sz, "hh");
	s = malloc(sizeof(s));
	ft_conv_to_str(conv);
	printf("printf de test en d = %X\n", i);
	printf("apres itoa int str = %s\n\n", conv->str);
	printf("p de i        %p\n", i);
	printf("dup = (int)&i    %x\n", dup);

	ptr2 = &dup;
	printf("%d\n", *ptr2);
	s = malloc(sizeof(int));
	s = dup;

	printf("S S S %d\n", s);
	printf("%d\n", dup);

	return (0);
}
