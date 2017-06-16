/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 00:34:41 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/01 07:18:50 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dst_cpy;
	const char	*src_cpy;
	size_t		size_cpy;
	size_t		dst_len;

	dst_cpy = dst;
	src_cpy = src;
	size_cpy = size;
	while (size_cpy-- && *dst_cpy)
		dst_cpy++;
	dst_len = (size_t)(dst_cpy - dst);
	size_cpy = size - dst_len;
	if (size_cpy == 0)
		return (dst_len + ft_strlen(src_cpy));
	while (*src_cpy)
	{
		if (size_cpy != 1)
		{
			*dst_cpy++ = *src_cpy;
			size_cpy--;
		}
		src_cpy++;
	}
	*dst_cpy = '\0';
	return (size_t)(dst_len + (src_cpy - src));
}
