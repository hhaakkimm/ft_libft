/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 01:24:01 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/12 02:50:38 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ans;

	ans = NULL;
	while (1)
	{
		if (*s == (char)c)
			ans = ((char *)s);
		if (*s == '\0')
			return (NULL);
	}
	return (ans);
}