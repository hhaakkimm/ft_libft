/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:39:17 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/16 18:47:47 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*f;
	size_t	i;

	f = malloc(sizeof(char) * (len + 1));
	if (!f)
		return (NULL);
	i = start;
	while (i < len)
	{
		*f++ = s[i++];
	}
	*f = '\0';
	return (f);
}
