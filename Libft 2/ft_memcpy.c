/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:03:35 by asallahi          #+#    #+#             */
/*   Updated: 2021/11/23 02:03:38 by asallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!src && !dst)
		return (NULL);
	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	i = 0 ;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
