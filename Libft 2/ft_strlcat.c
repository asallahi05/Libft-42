/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:21:36 by asallahi          #+#    #+#             */
/*   Updated: 2021/11/23 02:21:41 by asallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	vtc;
	size_t	i;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	vtc = dstsize - d - 1;
	i = 0;
	if (d >= dstsize || !dstsize)
		return (dstsize + s);
	while (src[i] && d < vtc)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}


int main(void)
{
	char s[] = "abcdefgh";
	char s2[] = "abcdefgh";
	char s1[] = "ayoub 3andostilo";

	printf("%zu \n", ft_strlcat(s, s1, 10));
	printf("%s\n", s);
	// printf("%zu \n", strlcat(s2, s1, 10));
	return (0);
}