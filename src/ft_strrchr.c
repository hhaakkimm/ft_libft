/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 01:24:01 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/12 01:28:32 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *strrchr(const char *s, int c)
{
	char *ans;

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
