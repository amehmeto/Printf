/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 20:59:50 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/16 07:13:44 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static char		*ft_long_to_hex(long n)
{
	char	*rslt;
	long	size;
	long	a;

	a = n;
	size = 3;
	while (a >>= 4)
		size++;
	if (n < 0 || !(rslt = (char *)ft_strnew((size_t)size)))
		return (NULL);
	rslt[0] = '0';
	rslt[1] = 'x';
	a = 0;
	while (size-- && *(rslt + size) != 'x')
	{
		if ((a = n % 16) < 10)
			*(rslt + size) = (char)a + '0';
		else
			*(rslt + size) = (char)a + 'W';
		n /= 16;
	}
	return (rslt);
}

void			ft_conv_p(char **result, va_list ap)
{
	char	*tmp;
	char	*tmp2;

	tmp = *result;
	tmp2 = ft_long_to_hex((long)va_arg(ap, void *));
	*result = ft_strjoin(tmp, tmp2);
	free(tmp);
	free(tmp2);
}
