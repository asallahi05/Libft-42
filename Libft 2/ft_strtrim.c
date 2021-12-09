/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:24:29 by asallahi          #+#    #+#             */
/*   Updated: 2021/11/23 02:24:35 by asallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	samechar(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	int		i;
	int		d;
	int		f;
	char	*str;

	d = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[d] && samechar(set, s1[d]))
		d++;
	f = ft_strlen(s1) - 1;
	while (f >= d && samechar(set, s1[f]))
		f--;
	str = (char *)malloc(f - d + 2);
	if (!str)
		return (NULL);
	while (d <= f)
	{
		str[i] = s1[d];
		i++;
		d++;
	}
	str[i] = '\0';
	return (str);
}
