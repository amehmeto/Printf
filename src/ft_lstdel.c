/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 18:01:23 by amehmeto          #+#    #+#             */
/*   Updated: 2017/01/06 18:40:10 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list *(*alst), void (*del)(void *, size_t))
{
	t_list	*next;
	t_list	*tmp;

	if (alst && (*alst) && del)
	{
		tmp = *alst;
		while (tmp)
		{
			next = tmp->next;
			del(tmp->content, tmp->content_size);
			free(tmp);
			tmp = next;
		}
		*alst = NULL;
	}
}
