/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 04:35:54 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/15 02:57:28 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void			ft_conv_d(char **result, va_list ap)
{
	char	*tmp;
	char	*tmp2;

	tmp = *result;
	tmp2 = ft_itoa(va_arg(ap, int));
	*result = ft_strjoin(tmp, tmp2);
	free(tmp);
	free(tmp2);
}
