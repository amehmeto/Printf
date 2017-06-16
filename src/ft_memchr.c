/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:04:59 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/01 06:55:48 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	unsigned char			d;
	const unsigned char		*tmp_s;

	i = 0;
	d = (unsigned char)c;
	tmp_s = s;
	if (n == 0)
		return (NULL);
	while (*tmp_s != d && i < n - 1)
	{
		tmp_s++;
		i++;
	}
	if (*tmp_s == d)
		return (void *)(tmp_s);
	return (NULL);
}
