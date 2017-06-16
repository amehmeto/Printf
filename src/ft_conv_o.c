/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 03:07:54 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/16 07:11:55 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static char		*ft_long_to_oct(long n)
{
	char	*rslt;
	long	size;
	long	a;

	a = n;
	size = 1;
	while (a >>= 3)
		size++;
	if (n < 0 || !(rslt = (char *)ft_strnew((size_t)size)))
		return (NULL);
	a = 0;
	while (size-- && *(rslt + size) != 'x')
	{
		if ((a = n % 8) < 10)
			*(rslt + size) = (char)a + '0';
		else
			*(rslt + size) = (char)a + 'W';
		n /= 8;
	}
	return (rslt);
}

void			ft_conv_o(char **result, va_list ap)
{
	char	*tmp;
	char	*tmp2;

	tmp = *result;
	tmp2 = ft_long_to_oct((long)va_arg(ap, int));
	*result = ft_strjoin(tmp, tmp2);
	free(tmp);
	free(tmp2);
}
