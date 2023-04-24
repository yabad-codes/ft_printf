/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:02:52 by yabad             #+#    #+#             */
/*   Updated: 2022/10/24 14:49:18 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *counter)
{
	unsigned int	np;

	if (n < 0)
	{
		ft_putchar('-', counter);
		np = -1 * n;
	}
	else
		np = n;
	if (np < 10)
		ft_putchar(np + '0', counter);
	else
	{
		ft_putnbr(np / 10, counter);
		ft_putchar(np % 10 + '0', counter);
	}
}
