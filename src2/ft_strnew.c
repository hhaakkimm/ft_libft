/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:52:33 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/16 18:43:07 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*s;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	if (size > 0)
		while (size)
		{
			*s++ = '\0';
			size--;
		}
	return (s);
}
