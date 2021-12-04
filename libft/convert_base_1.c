/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 08:47:09 by ayblin            #+#    #+#             */
/*   Updated: 2021/12/03 11:24:53 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*rev(char *str)
{
	int		i;
	int		size;
	char	swap;

	size = 0;
	while (str[size])
		size++;
	i = 0;
	while (i < size)
	{
		swap = str[i];
		str[i] = str[size - 1];
		str[size - 1] = swap;
	}
	return (str);
}

int	len_tot(int num, char *base)
{
	int	len;

	len = 1;
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num >= len1(base))
	{
		len++;
		num /= len1(base);
	}
	return (len);
}

char	*itoa_base(int nb, char *base)
{
	char	*tab;
	int		sign;
	int		len;

	len = len_tot(nb, base);
	sign = 1;
	if (nb < 0)
	{
		sign = -1;
		nb = -nb;
	}
	tab = malloc(sizeof(char) * (len + 1));
	tab[len] = '\0';
	len--;
	while (nb >= len1(base))
	{
		tab[len] = base[nb % len1(base)];
		nb /= len1(base);
		len--;
	}
	tab[len] = base[nb % len1(base)];
	if (sign == -1)
		tab[0] = '-';
	return (tab);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*string;
	int			tab;

	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	tab = atoi_base(nbr, base_from);
	string = itoa_base(tab, base_to);
	return (string);
}
