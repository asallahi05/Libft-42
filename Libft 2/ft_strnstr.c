/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:21:22 by asallahi          #+#    #+#             */
/*   Updated: 2021/11/23 02:21:24 by asallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (find[0] == 0)
		return ((char *)(s));
	while (s[i] && i < len)
	{
		j = 0;
		while (s[i + j] == find[j] && i + j < len)
		{
			if (find[j + 1] == '\0')
				return ((char *)&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
