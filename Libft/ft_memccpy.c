/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 04:31:59 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/01 06:42:12 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		d;
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	i = 0;
	d = (unsigned char)c;
	tmp_dst = (unsigned char*)dst;
	tmp_src = src;
	while (i < n && tmp_src[i] != d)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	if (i != n && d == tmp_src[i])
	{
		tmp_dst[i] = tmp_src[i];
		return (&dst[i + 1]);
	}
	return (NULL);
}
