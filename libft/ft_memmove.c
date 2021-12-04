/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:18:17 by ayblin            #+#    #+#             */
/*   Updated: 2021/11/27 14:45:02 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buff1;
	unsigned char	*buff2;
	size_t			i;

	i = 0;
	buff1 = (unsigned char *)src;
	buff2 = (unsigned char *)dest;
	if (src < dest)
	{
		while (n--)
			buff2[n] = buff1[n];
	}
	else
	{
		while (i < n)
		{
			buff2[i] = buff1[i];
			i++;
		}
	}
	dest = (void *)buff2;
	return (dest);
}
