/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:35:44 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/11 21:31:15 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	while (n--)
	{
		if (*s == (unsigned char)c)
			return (dst);
		*d++ = *s++;
	}
	*d = *s;
	return (dst);
}
