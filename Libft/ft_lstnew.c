/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 04:24:16 by amehmeto          #+#    #+#             */
/*   Updated: 2017/01/06 14:43:19 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*maillon;

	if (!(maillon = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		maillon->content = NULL;
		maillon->content_size = 0;
	}
	else
	{
		if (!(maillon->content = malloc(content_size + 1)))
			return (NULL);
		maillon->content_size = content_size;
		ft_memcpy(maillon->content, content, content_size);
	}
	maillon->next = NULL;
	return (maillon);
}
