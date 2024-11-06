/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:26:59 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/18 10:18:38 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_buf_size(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = n * (-1);
	}
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static void	set_itoa(char *itoa_arr, int itoa_size, int n)
{
	char	*itoa_buf;

	itoa_buf = itoa_arr + (itoa_size - 1);
	if (n < 0)
	{
		*itoa_arr = '-';
		n = n * (-1);
	}
	while (n != 0)
	{
		*itoa_buf = '0' + (n % 10);
		n = n / 10;
		if (n != 0)
			itoa_buf--;
	}
}

char	*ft_itoa(int n)
{
	char	*itoa_arr;
	size_t	itoa_size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	itoa_size = count_buf_size(n);
	itoa_arr = (char *)ft_calloc(itoa_size + 1, sizeof(char));
	if (!itoa_arr)
		return (NULL);
	set_itoa(itoa_arr, itoa_size, n);
	return (itoa_arr);
}
