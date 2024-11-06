/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format_specifiers_1.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:26:34 by soochoi           #+#    #+#             */
/*   Updated: 2024/11/06 20:37:35 by soochoi          ###   ########.fr       */
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

void	ft_check_width(const char **format, t_tag *tag)
{
	int	width;

	width = 0;
	while (ft_isdigit(**format))
	{
		width = width * 10 + (**format - '0');
		(*format)++;
	}
	tag->width = width;
}

void	ft_check_precision(const char **format, t_tag *tag)
{
	int	precision_lenth;

	if (!(**format == '.'))
		return ;
	(*format)++;
	precision_lenth = 0;
	//식별자를 찾을 때, 없을 경우 오류 값인 -1을 printf에서 반환해주어야한다.
	
}
