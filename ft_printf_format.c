/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:27:10 by soochoi           #+#    #+#             */
/*   Updated: 2024/11/06 18:57:36 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar(const char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *s)
{
	int	str_len;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	str_len = 0;
	while (*s)
	{
		write(1, *s++, 1);
		str_len++;
	}
	return (str_len);
}

int	ft_putnbr(const char *s)

int	ft_putptr(const char *s)
//X일 경우 0123456789ABCDEF로 base를 초기화
