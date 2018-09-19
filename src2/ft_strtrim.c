/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:51:52 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/16 18:48:29 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*fresh;
	size_t	i;
	size_t	n;

	fresh = (char *)malloc(ft_strlen(s) + 1);
	i = 0;
	n = ft_strlen(s) - 1;
	if (!fresh)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[n] == ' ' || s[n] == '\t' || s[i] == '\n')
		n--;
	while (i <= n)
		*fresh++ = s[i++];
	*fresh = '\0';
	return (fresh);
}
