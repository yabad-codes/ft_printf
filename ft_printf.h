/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:54:43 by yabad             #+#    #+#             */
/*   Updated: 2022/10/25 10:02:56 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

void	ft_putchar(char c, int *counter);
void	ft_putstr(char *str, int *counter);
int		ft_printf(const char *format, ...);
void	ft_putnbr(int n, int *counter);
void	ft_putnbru(unsigned int n, int *counter);
void	ft_puthexa(unsigned int n, char c, int *counter);
void	ft_putptr(unsigned long int n, int *counter);
void	check_args(va_list args, const char *format, int *counter, int *i);

#endif