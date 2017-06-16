/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 18:09:08 by amehmeto          #+#    #+#             */
/*   Updated: 2017/01/06 22:35:33 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;

	tmp = NULL;
	if (lst && f)
	{
		tmp = f(lst);
		tmp->next = lst->next ? ft_lstmap(lst->next, f) : NULL;
	}
	return (tmp);
}
