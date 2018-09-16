/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:18:03 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/16 15:21:16 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*f;

	f = (char *)s;
	i = 0;
	while (*f != '\0' && i < n)
	{
		if (*f == (unsigned char)c)
			return (f);
		f++;
		i++;
	}
	return (NULL);
}
