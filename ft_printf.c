/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:40:12 by soochoi           #+#    #+#             */
/*   Updated: 2024/11/06 20:38:48 by soochoi          ###   ########.fr       */
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
			if(!(*format))
				break ;
			//flag를 확인하는 함수 매개변수를 받을 때, 이중포인터로 받아서 format의 위치 이동이 필요
			//폭을 확인 atoi or isdigit이용 -> 반복해서 (num*10)
			//.(dot)확인+뒤에 수가 있는지 없는지 확인 -> 없으면 무시
			lenth += format_specifiers(ap, *format);
		}
		else
			lenth += ft_putchar(*format);
		format++;
	}
	return (lenth);
}

int	ft_printf(const char *format, ...)
{
	int	lenth;
	va_list	ap;

	if (!format)
		return (-1);
	va_start(ap, format);
	lenth = 0;
	lenth += ft_tag_printf(format, ap);
	va_end(ap);
	return (lenth);
}
