/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 15:10:14 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/13 18:34:22 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	 char	*c;
	 size_t	i;

	if (!s || !f)
		return (NULL);
	c = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i] != '\0')
	{
		c[i] = (*f)(s[i]);
		i++;
	}
	return (c);
}
