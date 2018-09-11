/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:41:05 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/10 18:19:33 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *arr, int c, size_t n)
{
	char *temp;

	if (n > 0)
	{
		temp = arr;
		while (n)
		{
			*temp++ = (unsigned char)c;
			n--;
		}
	}
	return arr;
}
