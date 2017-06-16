/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 11:37:46 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/01 06:50:38 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	tmp_src = src;
	tmp_dst = (unsigned char *)dst;
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			tmp_dst[i - 1] = tmp_src[i - 1];
			i--;
		}
	}
	return (dst);
}
