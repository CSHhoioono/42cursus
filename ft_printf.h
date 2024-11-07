/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:52:28 by soochoi           #+#    #+#             */
/*   Updated: 2024/11/07 20:11:00 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

# define TRUE 1
# define FALSE 0

typedef struct s_tag
{
	int	plus;
	int	space;
	int	hash;
	int	minus;
	int	zero;
	int	width;
	int	precision;
	int	num_base;
}	t_tag;

int		ft_putchar(const char c);
int		ft_putstr(const char *s);

void	ft_check_flag(const char **format, t_tag *tag);
int		ft_check_width(const char **format, t_tag *tag);
int		ft_check_precision(const char **format, t_tag *tag);

int		ft_format_specifiers(va_list ap, const char format, t_tag *tag,
			int *lenth);
int		ft_format_char(va_list ap, t_tag *tag);
int		ft_format_str(va_list ap, t_tag *tag);
int		ft_format_ptr(va_list ap, t_tag *tag);
int		ft_format_di(va_list ap, t_tag *tag);
int		ft_format_u(va_list ap, t_tag *tag);
int		ft_format_hex(const char format, va_list ap, t_tag *tag);

void	init_tag(t_tag *t);
int		ft_tag_printf(const char *format, va_list ap);
int		ft_printf(const char *format, ...);

#endif
