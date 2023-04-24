/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:10:50 by yabad             #+#    #+#             */
/*   Updated: 2022/10/24 14:49:21 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru(unsigned int n, int *counter)
{
	if (n < 10)
		ft_putchar(n + '0', counter);
	else
	{
		ft_putnbru(n / 10, counter);
		ft_putchar(n % 10 + '0', counter);
	}
}
