/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:27:12 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/07 00:15:02 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*rslt;

	i = 0;
	if (s)
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		len = ft_strlen(s) - i;
		if (!len)
			return (ft_strnew(1));
		j = ft_strlen(s) - 1;
		while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		{
			len--;
			j--;
		}
		rslt = ft_strsub(s, (unsigned int)i, len);
		return (rslt);
	}
	return (0);
}
