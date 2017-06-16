/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 09:27:18 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/07 00:18:57 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	char			*rslt;
	unsigned int	i;

	i = 0;
	if (s)
	{
		size = ft_strlen(s);
		if (!(rslt = malloc(sizeof(char) * size + 1)))
			return (0);
		while (s[i])
		{
			rslt[i] = f(i, s[i]);
			i++;
		}
		rslt[i] = '\0';
		return (rslt);
	}
	return (0);
}
