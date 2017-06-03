/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 07:47:39 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/07 00:20:32 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	char	*rslt;
	int		i;

	i = 0;
	if (s)
	{
		size = ft_strlen(s);
		if (!(rslt = malloc(sizeof(char) * size + 1)))
			return (0);
		while (s[i])
		{
			rslt[i] = f(s[i]);
			i++;
		}
		rslt[i] = '\0';
		return (rslt);
	}
	return (0);
}
