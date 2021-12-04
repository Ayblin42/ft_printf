/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:19:22 by ayblin            #+#    #+#             */
/*   Updated: 2021/11/25 17:16:31 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*buff1;
	unsigned char	*buff2;
	size_t			i;

	buff1 = (unsigned char *)src;
	buff2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		buff2[i] = buff1[i];
		i++;
	}
	dest = (void *)buff2;
	return (dest);
}
