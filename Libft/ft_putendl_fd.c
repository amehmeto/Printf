/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 02:42:27 by amehmeto          #+#    #+#             */
/*   Updated: 2017/05/07 00:03:34 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	*tmp;

	tmp = ft_strdup(s);
	ft_putstr_fd(tmp, fd);
	ft_putchar_fd('\n', fd);
	free(tmp);
}
