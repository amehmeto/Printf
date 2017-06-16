/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 10:11:41 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/16 10:14:30 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void			ft_percent(char **result, va_list ap)
{
	char	*tmp;

	(void)ap;
	tmp = *result;
	*result = ft_strjoin(tmp, "%");
	free(tmp);
}
