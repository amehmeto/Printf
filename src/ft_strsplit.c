/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:59:10 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/07 00:14:18 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char			**rslt;
	size_t			start;
	size_t			i;
	size_t			j;

	if (s)
	{
		i = 0;
		j = 0;
		if (!(rslt = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1))))
			return (NULL);
		while (s[i])
		{
			while (s[i] == c)
				i++;
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[start])
				rslt[j++] = ft_strsub(s, (unsigned int)start, i - start);
		}
		rslt[j] = NULL;
		return (rslt);
	}
	return (NULL);
}
