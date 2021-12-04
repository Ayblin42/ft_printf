/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:02:24 by ayblin            #+#    #+#             */
/*   Updated: 2021/12/04 14:54:10 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg_x(va_list list)
{
	int		h;
	char	*str;

	h = va_arg(list, int);
	str = ft_convert_base(ft_itoa(h), "0123456789", "0123456789abcdef");
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_print_arg_mx(va_list list)
{
	int		h;
	char	*str;

	h = va_arg(list, int);
	str = ft_convert_base(ft_itoa(h), "0123456789", "0123456789ABCDEF");
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_print_arg_p(va_list list)
{
	void	*a;
	char	*str;

	a = va_arg(list, void *);
	str = ft_convert_base(ft_longitoa((unsigned long int)a), "0123456789", "0123456789abcdef");
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_print_arg_di(va_list list)
{
	int		n;

	n = va_arg(list, int);
	ft_putnbr(n);
	return (ft_strlen(ft_itoa(n)));
}

int	ft_print_arg_u(va_list list)
{
	unsigned int	n;

	n = va_arg(list, unsigned int);
	ft_putunbr(n);
	return (ft_strlen(ft_itoa(n)));
}
