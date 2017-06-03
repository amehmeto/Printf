/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 21:09:31 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/01 06:33:58 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		identik(const char *a, const char *b, size_t n)
{
	int		m;

	m = (int)n;
	while (*b)
	{
		if (*a++ == *b++)
			m--;
		else
		{
			if (m <= 0)
				return (-1);
			return (m);
		}
	}
	if (m < 0)
		return (-1);
	return (0);
}

char			*ft_strnstr(const char *big, const char *ltle, size_t len)
{
	int		id_check;

	if (!(*ltle))
		return ((char*)big);
	while (*big)
	{
		if (*big == *ltle)
		{
			id_check = identik(big, ltle, len);
			if (!id_check)
				return ((char*)big);
			else if (id_check == -1)
				break ;
			else
			{
				len--;
				big++;
			}
		}
		else if (*big++ != *ltle)
			len--;
	}
	return (NULL);
}
