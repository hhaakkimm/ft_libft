/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 19:28:57 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/16 18:51:12 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char		*ft_itoa(int n)
{
	char	*a;
	char	*str;
	int		i;
	int		t;

	a = (char *)malloc(sizeof(char) * 22);
	if (!a)
		return (NULL);
	i = 0;
	t = n;
	if (n < 0)
		t = -n;
	while (t > 0)
	{
		a[i++] = (t % 10) + 48;
		t /= 10;
	}
	if (n < 0)
		a[i++] = '-';
	str = ft_memalloc((size_t)i + 1);
	if (n == -2147483648)
		return ("-2147483648");
	else if (n == 0)
		str[0] = '0';
	while (--i >= 0)
		str[t++] = a[i];
	return (str);
}
