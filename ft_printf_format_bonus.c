/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:00:20 by soochoi           #+#    #+#             */
/*   Updated: 2024/11/07 19:00:31 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_check_flag(const char **format, t_tag *tag)
{
	while (**format == '+' || **format == ' ' || **format == '#'
		|| **format == '-' || **format == '0')
	{
		if (**format == ' ' && tag->plus == FALSE)
			tag->space = TRUE;
		else if (**format == '+')
		{
			tag->space = FALSE;
			tag->plus = TRUE;
		}
		else if (**format == '0' || tag->minus == FALSE)
			tag->zero = TRUE;
		else if (**format == '-')
		{
			tag->zero = FALSE;
			tag->minus = TRUE;
		}
		else if (**format == '#')
			tag->hash = TRUE;
		(*format)++;
	}
}

int	ft_check_width(const char **format, t_tag *tag)
{
	unsigned int	width;

	width = 0;
	while (ft_isdigit(**format))
	{
		width = width * 10 + (**format - '0');
		(*format)++;
	}
	if (width > 2147483647)
		return (-1);
	tag->width = (int)width;
	return ((int)width);
}

int	ft_check_precision(const char **format, t_tag *tag)
{
	unsigned int	precision_lenth;

	if (!(**format == '.'))
		return (FALSE);
	(*format)++;
	precision_lenth = 0;
	while (ft_isdigit(**format))
	{
		precision_lenth = precision * 10 + (**format - '0');
		(*format)++;
	}
	if (precision_lenth > 2147483647)
		return (-1);
	tag->precision = (int)precision_lenth;
	return ((int)precision_lenth);
}
