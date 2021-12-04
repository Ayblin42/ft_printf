/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:34:12 by ayblin            #+#    #+#             */
/*   Updated: 2021/11/30 19:18:22 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	while (len > 0 && start < ft_strlen(s))
	{
		ret[i] = s[i + start];
		i++;
		len--;
	}
	ret[i] = '\0';
	return (ret);
}
