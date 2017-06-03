/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 19:23:42 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/07 00:32:01 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		identik(const char *a, const char *b)
{
	int		i;

	i = 0;
	while (*b)
	{
		if (*a++ == *b++)
			i = 1;
		else
		{
			i = 0;
			break ;
		}
	}
	return (i);
}

char			*ft_strstr(const char *big, const char *little)
{
	if (!(*little))
		return ((char*)big);
	while (*big)
	{
		if (*big != *little)
			big++;
		else if (*big == *little)
		{
			if (identik(big, little))
				return ((char*)big);
			else
				big++;
		}
	}
	return (NULL);
}
