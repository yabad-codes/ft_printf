/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:56:04 by yabad             #+#    #+#             */
/*   Updated: 2022/10/25 10:04:23 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_args(va_list args, const char *format, int *counter, int *i)
{
	(*i)++;
	if (format[*i] == '%')
		ft_putchar(format[*i], counter);
	else if (format[*i] == 'c')
		ft_putchar(va_arg(args, int), counter);
	else if (format[*i] == 's')
		ft_putstr(va_arg(args, char *), counter);
	else if (format[*i] == 'd' || format[*i] == 'i')
		ft_putnbr(va_arg(args, int), counter);
	else if (format[*i] == 'u')
		ft_putnbru(va_arg(args, unsigned int), counter);
	else if (format[*i] == 'x' || format[*i] == 'X')
		ft_puthexa(va_arg(args, unsigned int), format[*i], counter);
	else if (format[*i] == 'p')
	{
		ft_putstr("0x", counter);
		ft_putptr(va_arg(args, unsigned long int), counter);
	}
}
