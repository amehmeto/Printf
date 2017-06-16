/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 01:23:37 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/15 03:44:42 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *src, size_t n)
{
	unsigned char			*mem_dup;
	const unsigned char		*tmp_src;
	size_t					i;

	tmp_src = src;
	if (!(mem_dup = ft_memalloc(n)))
		return (NULL);
	i = 0;
	while (i < n)
	{
		mem_dup[i] = (unsigned char)tmp_src[i];
		i++;
	}
	return (mem_dup);
}
