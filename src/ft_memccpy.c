/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:35:44 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/16 18:35:17 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
			size_t n)
{
	char			*d;
	char			*s;
	unsigned char	cc;

	d = (char *)dst;
	cc = c;
	s = (char *)src;
	while (n--)
	{
		if (*s == cc)
			return (dst);
		*d++ = *s++;
	}
	return (dst);
}
