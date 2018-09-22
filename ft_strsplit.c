/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 19:09:36 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/16 16:26:12 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
				cnt++;
		s++;
	}
	return (cnt);
}

// char			**ft_strsplit(char const *s, char c)
// {
// 	size_t		i;
// 	size_t		j;
// 	size_t		words;
// 	char		**tab;

// 	i = 0;
// 	if (!s || !c)
// 		return ((void *)0);
// 	words = ft_count_words(s, c);
// 	if (!(tab = (char **)malloc(sizeof(char *) * words)))
// 		return (NULL);
// 	while (i < words)
// 	{
// 		while (*s == c && *s)
// 			s++;
// 		tab[i] = (char *)malloc(sizeof(char) * (10000));
// 		j = 0;
// 		while (*s != c && *s)
// 			tab[i][j++] = *s++;
// 		tab[i][j] = '\0';
// 		i++;
// 	}
// 	tab[i] = 0;
// 	return (tab);
// }

static size_t	ft_count_letters(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (str[count] != c && str[count])
		count++;
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		words;
	char		**tab;

	i = 0;
	if (!s || !c)
		return ((void *)0);
	words = ft_count_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (i < words)
	{
		while (*s == c && *s)
			s++;
		tab[i] = (char *)malloc(sizeof(char) * (ft_count_letters(s, c) + 1));
		j = 0;
		while (*s != c && *s)
			tab[i][j++] = *s++;
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}