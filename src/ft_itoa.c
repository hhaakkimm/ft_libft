/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <aabdrakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 19:28:57 by aabdrakh          #+#    #+#             */
/*   Updated: 2019/06/20 15:28:56 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int				col;
	int				on;
	char			*str;
	unsigned int	temp;

	on = n < 0 ? 1 : 0;
	col = n;
	temp = (n < 0) ? (-n) : n;
	while (n > 8 || n < -8)
	{
		on++;
		n = n / 10;
	}
	if (!(str = (char *)malloc(sizeof(char) * (on + 2))))
		return (NULL);
	str[on + 1] = '\0';
	while (on > -1)
	{
		str[on--] = (temp % 10) + '0';
		temp = temp / 10;
	}
	str[0] = col < 0 ? '-' : str[0];
	return (str);
}
