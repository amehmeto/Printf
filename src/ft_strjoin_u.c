/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 21:54:20 by amehmeto          #+#    #+#             */
/*   Updated: 2017/04/24 22:19:45 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_u(char const *s1, char const *s2)
{
	size_t		s1_len;
	size_t		s2_len;
	char		*str;

	if (s1)
		s1_len = ft_strlen(s1);
	else
		s1_len = 0;
	if (s2)
		s2_len = ft_strlen(s2);
	else
		s2_len = 0;
	if (!(str = (char*)malloc(sizeof(char) * (s1_len + s2_len) + 1)))
		return (NULL);
	if (s1)
		str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}
