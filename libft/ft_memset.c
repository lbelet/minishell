/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbelet <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:27:45 by lbelet            #+#    #+#             */
/*   Updated: 2021/10/18 08:28:06 by lbelet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int i, size_t len)
{
	char	*str;

	str = s;
	while (len)
	{
		*str = (unsigned char)i;
		str++;
		len--;
	}
	return (s);
}
