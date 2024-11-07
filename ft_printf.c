/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:40:12 by soochoi           #+#    #+#             */
/*   Updated: 2024/11/07 19:51:04 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	init_tag(t_tag *t)
{
	t->plus = FALSE;
	t->space = FALSE;
	t->hash = FALSE;
	t->minus = FALSE;
	t->zero = FALSE;
	t->width = -1;
	t->precision = -1;
	t->num_base = 10;
}

int	ft_tag_printf(const char *format, va_list ap)
{
	int		lenth;
	t_tag	tag;

	lenth = 0;
	while (*format)
	{
		init_tag(tag);
		if (*format == '%')
		{
			format++;
			if (!(*format))
				break ;
			ft_check_flag(&format, tag);
			if (ft_check_width(&format, tag) == -1)
				return (-1);
			if (ft_check_precision(&format, tag) == -1)
				return (-1);
			if (ft_format_specifiers(ap, *format, &lenth))
				return (-1);
		}
		else
			lenth += ft_putchar(*format);
		format++;
	}
	return (lenth);
}

int	ft_printf(const char *format, ...)
{
	int		lenth;
	va_list	ap;

	if (!format)
		return (-1);
	va_start(ap, format);
	lenth = 0;
	lenth += ft_tag_printf(format, ap);
	va_end(ap);
	return (lenth);
}
