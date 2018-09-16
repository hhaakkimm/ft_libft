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

#include "../libft.h"
#include <string.h>
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	char	*soz;
	size_t	i;
	size_t	j;
	size_t	k;

	fresh = (char **)malloc(ft_strlen(s) * 100);
	i = 0;
	k = 0;
	if (!fresh)
		return (NULL);
	while (s[i] != '\0')
	{
		j = 0;
		if (s[i] == c && s[i + 1] != c)
		{
			soz = (char *)malloc(100);
			while (s[i + 1] != '\0' || s[i + 1] != c)
				*soz++ = s[i + 1];
			*soz = '\0';
			fresh[k] = ft_strcpy(fresh[k], soz);
			k++;
		}
		i++;
	}
	return (fresh);
}
