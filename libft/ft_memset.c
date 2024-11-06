/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:38:37 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/13 17:16:03 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*buf;

	buf = s;
	while (n != 0)
	{
		*(unsigned char *)s++ = (unsigned char) c;
		n--;
	}
	return (buf);
}
