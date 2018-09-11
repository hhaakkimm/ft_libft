/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:41:05 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/10 18:30:59 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char *temp;

	if (len > 0)
	{
		temp = b;
		while (n)
		{
			*temp++ = (unsigned char)c;
			n--;
		}
	}
	return (b);
}
