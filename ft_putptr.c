/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:57:27 by yabad             #+#    #+#             */
/*   Updated: 2022/10/24 23:38:57 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long int n, int *counter)
{
	if (n < 16)
		ft_putchar("0123456789abcdef"[n], counter);
	else
	{
		ft_putptr(n / 16, counter);
		ft_putchar("0123456789abcdef"[n % 16], counter);
	}
}
