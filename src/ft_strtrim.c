/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdrakh <aabdrakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:51:52 by aabdrakh          #+#    #+#             */
/*   Updated: 2019/06/20 15:28:56 by aabdrakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	char	*str;

	if (s == NULL)
		return (NULL);
	n = ft_strlen(s);
	while (s[n - 1] == ' ' || s[n - 1] == '\t' || s[n - 1] == '\n')
		n--;
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
		n--;
	}
	n = (n <= 0) ? 0 : n;
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	s += i;
	i = -1;
	while (++i < n)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
