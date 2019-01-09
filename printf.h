/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:58:02 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/01/09 11:02:15 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

# include <stdio.h> //printf
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		printf(const char * restrict format, ...);

#endif

