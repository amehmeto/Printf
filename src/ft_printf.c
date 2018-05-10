/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 06:09:18 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/16 10:54:56 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static void			result_builder(char *fmt, size_t start, size_t i,
																char **result)
{
	char	*tmp, *tmp2;

	tmp = *result;
	tmp2 = ft_strsub(fmt, (unsigned)start, i - start);
	*result = ft_strjoin(tmp, tmp2);
	free(tmp);
	free(tmp2);
}

static ssize_t		flag_parser(const char *s, char **c)
{
	const char	*s_cpy;

	s_cpy = s;
	while (*s && (FLAGS || MFIELD_AND_PRECISION))
		s++;
	if (*s == '%' || CONV_F_1 || CONV_F_2 || CONV_F_3)
	{
		**c = *s;
		return (ssize_t)(s - s_cpy);
	}
	return (-1);
}

int					ft_printf(const char *fmt, ...)
{
	char		*result, *conv;
	size_t		i, start;
	va_list		ap;
	ssize_t		a;
	int			ret;

	va_start(ap, fmt);

	if (!(conv = (char *)malloc(sizeof(char))))
		return (-1);
	result = NULL;
	start = 0;
	i = 0;
	while (fmt[i])
	{
		while (fmt[i] && fmt[i] != '%')
			i++;
		if (result)
			result_builder(fmt, start, i, &result);
		else
			result = ft_strsub(fmt, (unsigned)start, i);
		i++;
		if ((a = flag_parser(&fmt[i], &conv)) != -1)
		{
			if (*conv == '%')
				ft_percent(&result, ap);
			else if (*conv == 's')
				ft_conv_s(&result, ap);
			else if (*conv == 'p')
				ft_conv_p(&result, ap);
			else if (*conv == 'd' || *conv == 'i')
				ft_conv_d(&result, ap);
			else if (*conv == 'o')
				ft_conv_o(&result, ap);
		}
		i += (size_t)a + 1;
		start = i;
	}
	ft_putstr(result);
	
	ret = (int)ft_strlen(result);
	free(result);
	free(conv);

	va_end(ap);
	return (ret);
}
