/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 05:50:33 by ayblin            #+#    #+#             */
/*   Updated: 2021/12/04 13:11:30 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_print_arg(char c, va_list list);
int		ft_print_arg(char c, va_list list);
int		ft_print_arg_s(va_list list);
int		ft_print_arg_p(va_list list);
int		ft_print_arg_di(va_list list);
int		ft_print_arg_u(va_list list);
int		ft_print_arg_x(va_list list);
int		ft_print_arg_mx(va_list list);
int		ft_print_arg_pc(va_list list);

#endif