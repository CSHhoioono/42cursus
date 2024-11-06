/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:26:16 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/18 12:42:35 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_write_num(int n, int fd)
{
	char	buf;

	if (n == 0)
		return ;
	buf = '0' + (n % 10);
	ft_write_num(n / 10, fd);
	write(fd, &buf, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = n * (-1);
		}
		ft_write_num(n, fd);
	}
}
