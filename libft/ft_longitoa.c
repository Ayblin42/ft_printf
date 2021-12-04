/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longitoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:11:41 by ayblin            #+#    #+#             */
/*   Updated: 2021/12/04 14:19:04 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_nbr(unsigned long int n)
{
	unsigned long int	ret;

	ret = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		ret++;
	while (n != 0)
	{
		n /= 10;
		ret++;
	}
	return (ret);
}

static char	*ft_rev_str(char *str)
{
	size_t		i;
	size_t		j;
	char		tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

static void	negativ(unsigned long int	*n, int *sign)
{
	if (*n < 0)
	{
		*sign = -1;
		*n *= -1;
	}
}

char	*ft_longitoa(unsigned long int n)
{
	int		sign;
	char	*ret;
	unsigned long int		len;
	unsigned long int		i;

	i = 0;
	sign = 1;
	len = ft_count_nbr(n);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	negativ(&n, &sign);
	ret[len] = '\0';
	while (i < len)
	{
		ret[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (sign < 0)
		ret[len - 1] = '-';
	return (ft_rev_str(ret));
}

