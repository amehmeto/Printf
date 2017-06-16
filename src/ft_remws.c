/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remws.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:18:34 by amehmeto          #+#    #+#             */
/*   Updated: 2016/12/01 09:54:00 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_remws(char const *s)
{
	char	*cpy;
	char	*cpy_2;

	if (s)
	{
		cpy = (char *)malloc(sizeof(char) * ft_strlen(s));
		if (!(cpy))
			return (NULL);
		cpy_2 = cpy;
		while (*s)
		{
			if (*s != ' ' && *s != '\n' && *s != '\t')
				*(cpy++) = *(s++);
			else
				s++;
		}
		*cpy = '\0';
		return (cpy_2);
	}
	return (NULL);
}
