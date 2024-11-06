/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:52:28 by soochoi           #+#    #+#             */
/*   Updated: 2024/11/06 20:27:56 by soochoi          ###   ########.fr       */
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

typedef	struct s_tag
{
	int	plus;
	int	space;
	int	hash;
	int	minus;
	int	zero;
	int	width;//각 서식지정자별 최대로 할 수 있는 길이를 알고 있어야함.
	int	precision;
	int	num_base;
}	t_tag;

int		ft_putchar(const char c);
int		ft_putstr(const char *s);

void	ft_check_flag(const char **format, t_tag *tag);
void	ft_check_width(const char **format, t_tag *tag);
void	ft_check_width(const char **format, t_tag *tag);

void	init_tag(t_tag *t);
int		ft_tag_printf(const char *format, va_list ap);
int		ft_printf(const char *format, ...);

#endif
