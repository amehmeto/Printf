/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 06:05:26 by amehmeto          #+#    #+#             */
/*   Updated: 2017/01/06 19:50:18 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void	*ptr;

	ptr = ft_memalloc(size + 1);
	if (!(ptr))
		return (NULL);
	return (ptr);
}