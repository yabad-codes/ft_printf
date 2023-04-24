/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:20:21 by yabad             #+#    #+#             */
/*   Updated: 2022/10/24 19:28:49 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *counter)
{
	int	i;

	i = 0;
	if (str == NULL)
		ft_putstr("(null)", counter);
	else
	{
		while (str[i])
		{
			ft_putchar(str[i], counter);
			i++;
		}
	}
}
