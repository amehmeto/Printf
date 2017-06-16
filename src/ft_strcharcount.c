/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcharcount.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 01:43:18 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/30 01:43:39 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strcharcount(const char *s, char c)
{
	size_t		counter;
	size_t		i;

	counter = 0;
	i = 0;
	while (s[i])
		if (s[i++] == c)
			counter++;
	return (counter);
}
