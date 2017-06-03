/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 02:50:05 by amehmeto          #+#    #+#             */
/*   Updated: 2016/12/29 19:27:08 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	m;
	int		i;
	char	rslt[10];

	i = 0;
	m = n;
	if (m < 0)
	{
		ft_putchar_fd('-', fd);
		m *= -1;
	}
	rslt[i++] = m % 10 + '0';
	while (m /= 10)
		rslt[i++] = m % 10 + '0';
	i--;
	while (i >= 0)
		ft_putchar_fd(rslt[i--], fd);
}
