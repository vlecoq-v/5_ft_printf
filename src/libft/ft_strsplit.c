/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:12:01 by morgani           #+#    #+#             */
/*   Updated: 2018/11/22 11:43:19 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nb_words(char const *s, char c)
{
	int i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (words);
}

static int		count_letters(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char		**clean_tab(char **tab, int nb_words_plusone)
{
	int i;

	i = 0;
	while (i < nb_words_plusone)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!s || !(tab = (char**)malloc(sizeof(char*) * (nb_words(s, c) + 1))))
		return (NULL);
	while (i < nb_words(s, c))
	{
		tab[i] = ((char*)malloc(count_letters(&s[k], c) + 1));
		if (tab[i] == NULL)
			return (clean_tab(tab, nb_words(s, c) + 1));
		j = 0;
		while (s[k] && s[k] == c)
			k++;
		while (s[k] && s[k] != c)
			tab[i][j++] = s[k++];
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
