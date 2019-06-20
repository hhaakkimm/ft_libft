/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <aabdrakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:39:17 by aabdrakh          #+#    #+#             */
/*   Updated: 2019/06/20 15:28:56 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*f;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	f = (char *)malloc(sizeof(char) * (len + 1));
	if (!f)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		f[i++] = s[start++];
	}
	f[i] = '\0';
	return (f);
}
