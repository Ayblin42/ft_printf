/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 06:14:04 by ayblin            #+#    #+#             */
/*   Updated: 2021/12/04 13:11:46 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg_c(va_list list)
{
	ft_putchar(va_arg(list, int));
	return (1);
}

int	ft_print_arg_s(va_list list)
{
	int		i;
	char	*str;

	i = 0;
	str = va_arg(list, char *);
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_print_arg_pc(va_list list)
{
	ft_putchar('%');
	return (1);
}

int	ft_print_arg(char c, va_list list)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_print_arg_c(list);
	else if (c == 's')
		ret += ft_print_arg_s(list);
	else if (c == 'p')
		ret += ft_print_arg_p(list);
	else if (c == 'd' || c == 'i')
		ret += ft_print_arg_di(list);
	else if (c == 'u')
		ret += ft_print_arg_u(list);
	else if (c == 'x')
		ret += ft_print_arg_x(list);
	else if (c == '%')
		ret += ft_print_arg_pc(list);
	else if (c == 'X')
		ret += ft_print_arg_mx(list);
	return (ret);
}
