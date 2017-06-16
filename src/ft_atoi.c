/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 04:27:28 by amehmeto          #+#    #+#             */
/*   Updated: 2017/01/03 05:22:12 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	long long	nb;
	long long	neg;

	neg = 1;
	nb = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' && str++)
		neg = -1;
	else if (*str == '+' && str++)
		neg = 1;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb + (*str - '0')) * 10;
		str++;
	}
	nb /= 10;
	nb *= neg;
	return (int)(nb);
}
