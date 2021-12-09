/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:20:13 by asallahi          #+#    #+#             */
/*   Updated: 2021/11/23 02:20:14 by asallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	char		a;

	if (s == NULL)
		return (NULL);
	i = 0;
	a = (char)c;
	while (s[i] && s[i] != a)
		i++;
	if (s[i] == a)
		return ((char *)&s[i]);
	return (NULL);
}
