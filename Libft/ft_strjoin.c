/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 10:54:38 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/01 06:16:57 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cpy;

	if (s1 && s2)
	{
		cpy = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!(cpy))
			return (NULL);
		cpy = ft_strcpy(cpy, s1);
		cpy = ft_strcat(cpy, s2);
		return (cpy);
	}
	return (NULL);
}
