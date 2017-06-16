/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 18:07:08 by amehmeto          #+#    #+#             */
/*   Updated: 2017/01/06 20:17:41 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*next;
	t_list	*tmp;

	if (lst && f)
	{
		tmp = lst;
		while (tmp)
		{
			next = tmp->next;
			f(tmp);
			tmp = next;
		}
	}
}
