/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 05:44:16 by amehmeto          #+#    #+#             */
/*   Updated: 2017/06/16 10:13:34 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft.h"
# include <stdarg.h>
# include <stdio.h>

# define CONV_F_1 *s == 's' || *s == 'S' || *s == 'p' || *s == 'd' || *s == 'D'
# define CONV_F_2 *s == 'i' || *s == 'o' || *s == 'O' || *s == 'u' || *s == 'U'
# define CONV_F_3 *s == 'x' || *s == 'X' || *s == 'c' || *s == 'C'
# define FLAGS *s == '#' || *s == '0' || *s == '-' || *s == '+' || *s == ' '
# define MFIELD_AND_PRECISION (*s >= '0' && *s <= '9') || *s == '.'

int		ft_printf(const char *restrict format, ...);
void	ft_percent(char **result, va_list ap);
void	ft_conv_s(char **result, va_list ap);
void	ft_conv_p(char **result, va_list ap);
void	ft_conv_d(char **result, va_list ap);
void	ft_conv_o(char **result, va_list ap);

#endif
