/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 19:54:13 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/13 19:57:04 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void			ft_conv_s(char **result, va_list ap)
{
	char	*tmp;

	tmp = *result;
	*result = ft_strjoin(tmp, va_arg(ap, char *));
	free(tmp);
}
