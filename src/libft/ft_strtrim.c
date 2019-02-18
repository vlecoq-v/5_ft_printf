/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:10:37 by morgani           #+#    #+#             */
/*   Updated: 2018/12/03 20:40:48 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i_deb;
	size_t		i_fin;

	i_deb = 0;
	if (!s)
		return (NULL);
	while (s[i_deb] == ' ' || s[i_deb] == '\t' || s[i_deb] == '\n')
		i_deb++;
	i_fin = ft_strlen(s) - 1;
	while (s[i_fin] == ' ' || s[i_fin] == '\t' || s[i_fin] == '\n')
		i_fin--;
	return ((i_deb == ft_strlen(s)) ? ft_strsub(s, i_deb, 0) :
	ft_strsub(s, i_deb, i_fin - i_deb + 1));
}
