/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:55:25 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/14 18:41:12 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	if (d > s)
	{
		while (n >= 1)
		{
			*(unsigned char *)(d + (n - 1)) = *(unsigned char *)(s + (n - 1));
			n--;
		}
		return (d);
	}
	else
		return (ft_memcpy(d, s, n));
}
