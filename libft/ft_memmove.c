/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbelet <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:27:34 by lbelet            #+#    #+#             */
/*   Updated: 2022/07/26 18:30:00 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	size_t				i;

	d = (unsigned char *)dst;
	i = 0;
	if (!d && !src)
		return (NULL);
	if (d < (unsigned char *)src)
	{
		while (i < n)
		{
			d[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = ((unsigned char *)src)[n];
		}
	}
	return (dst);
}
