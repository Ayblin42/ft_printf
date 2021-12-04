/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 05:46:35 by ayblin            #+#    #+#             */
/*   Updated: 2021/12/04 14:54:28 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	int		ret;
	int		i;

	va_start(arg_list, str);
	ret = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ret += ft_print_arg(str[i + 1], arg_list);
			i += 2;
		}
		while (str[i] && str[i] != '%')
		{
			ft_putchar(str[i]);
			ret++;
			i++;
		}
	}
	return (ret);
}

#include <stdio.h>

int    main()
{
    int    i;
    i = 0;
     ft_printf("Hello World\n");
     ft_printf("There is 10 : %d \n", 10);
     ft_printf("There is 10 and 30 : %d %d\n", 10, 30);
     ft_printf("char Z : %c\n10 : %d\nchar M : %c\n", 'Z', 10, 'M');
     ft_printf("str : %s\n","bonjour");
     i = ft_printf("-500 en hexa : %x\n", 13);
     ft_printf("ret : %d\n", i);
     ft_printf("100 : %u\n", 100);
     ft_printf("-100 : %u\n", -100);
     i = ft_printf("address : %p\n", (void *)-9223372036854775808);
     printf("ret : %d\n", i);
     ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
     ft_printf(" %c \n", '0');
   //  ft_printf(" NULL %s NULL \n", NULL);
   
      printf("\n\n\n\n\n\n");

     printf("Hello World\n");
     printf("There is 10 : %d \n", 10);
     printf("There is 10 and 30 : %d %d\n", 10, 30);
     printf("char Z : %c\n10 : %d\nchar M : %c\n", 'Z', 10, 'M');
     printf("str : %s\n","bonjour");
     i = printf("-500 en hexa : %x\n", 13);
     printf("ret : %d\n", i);
     printf("100 : %u\n", 100);
     printf("-100 : %u\n", -100);
     i = printf("address : %p\n", (void *)-9223372036854775808);
     printf("ret : %d\n", i);
     printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
     printf(" %c \n", '0');
     printf(" NULL %s NULL \n", (char *)NULL);
    (void)i;
}