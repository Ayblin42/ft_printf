/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:06:38 by ayblin            #+#    #+#             */
/*   Updated: 2021/11/25 16:35:38 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	isset(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			start;
	int			end;
	char		*ret;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (isset(set, s1[start]) && s1[start])
		start++;
	while (end >= 0 && isset(set, s1[end]) && s1[end])
		end--;
	if (start > end)
		return (ft_strdup(""));
	ret = malloc(sizeof(char) * ((end - start) + 2));
	while (i <= (end - start) && s1[start + i])
	{
		ret[i] = s1[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
