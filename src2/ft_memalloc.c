/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:11:07 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/13 12:33:54 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void	*s;
	char	*c;

	s = malloc(size);
	if (size > 0)
	{
		c = s;
		while (size)
		{
			*c++ = (unsigned char)0;
			size--;
		}
	}
	return (s);
}
