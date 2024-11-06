/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:07:17 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/13 18:39:14 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char	*buf;

	if (d == s || !n)
		return (d);
	buf = (unsigned char *)d;
	while (n--)
		*(unsigned char *)d++ = *(unsigned char *)s++;
	return (buf);
}
