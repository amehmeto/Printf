/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 09:47:50 by amehmeto          #+#    #+#             */
/*   Updated: 2016/12/01 10:02:56 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*sub_cpy;

	if (s)
	{
		sub = (char *)malloc(sizeof(char) * (len + 1));
		if (!(sub))
			return (NULL);
		sub_cpy = sub;
		while (len)
		{
			*(sub++) = *(s + start++);
			len--;
		}
		*sub = '\0';
		return (sub_cpy);
	}
	return (0);
}
