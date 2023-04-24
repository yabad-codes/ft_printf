/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:18:54 by yabad             #+#    #+#             */
/*   Updated: 2022/10/24 23:26:25 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int n, char c, int *counter)
{
	if (c == 'x')
	{
		if (n < 16)
			ft_putchar("0123456789abcdef"[n], counter);
		else
		{
			ft_puthexa(n / 16, c, counter);
			ft_putchar("0123456789abcdef"[n % 16], counter);
		}
	}
	else
	{
		if (n < 16)
			ft_putchar("0123456789ABCDEF"[n], counter);
		else
		{
			ft_puthexa(n / 16, c, counter);
			ft_putchar("0123456789ABCDEF"[n % 16], counter);
		}
	}
}
