/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:22:03 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/16 15:52:56 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*f1;
	char	*f2;
	size_t	i;

	i = 0;
	f1 = (char *)s1;
	f2 = (char *)s2;
	while (i < n && *f1 && *f2)
	{
		if (*f1 != *f2)
			return (*f1 - *f2);
		i++;
		f1++;
		f2++;
	}
	return (0);
}
