/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 19:28:57 by aabdrakh          #+#    #+#             */
/*   Updated: 2018/09/16 16:34:00 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char			*fresh;
	unsigned int	t;
	int				k;
	int				s;

	s = 1;
	k = (n < 0) ? 1 : 0;
	t = (n < 0) ? (-n) : n;
	while (n /= 10 > 0)
		s++;
	fresh = malloc(sizeof(char) * (s + k));
	if (!fresh)
		return (NULL);
	fresh[s + k + 1] = '\0';
	while (t > 0)
	{
		fresh[s + k] = (t % 10);
		t /= 10;
		s--;
	}
	return (fresh);
}
