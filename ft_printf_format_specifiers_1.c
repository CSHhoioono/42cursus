/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format_specifiers_1.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:26:34 by soochoi           #+#    #+#             */
/*   Updated: 2024/11/07 20:13:45 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_format_specifiers(va_list ap, const char format, t_tag *tag, int *lenth)
{
	if (format == 'c')
		*lenth += ft_format_char(ap, tag);
	else if (format == 's')
		*lenth += ft_format_str(ap, tag);
	else if (format == 'p')
		*lenth += ft_format_ptr(ap, tag);
	else if (format == 'd' || format == 'i')
		*lenth += ft_format_di(ap, tag);
	else if (format == 'u')
		*lenth += ft_format_u(ap, tag);
	else if (format == 'x' || format == 'X')
		*lenth += ft_format_hex(format, ap, tag);
	else if (format == '%')
		*lenth += ft_putchar(format);
	else if (!format)
		return (-1);
	return (0);
}
