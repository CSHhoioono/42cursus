/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:13:28 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/15 18:49:56 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	char	*buf_b;
	size_t	l_len;

	l_len = ft_strlen(l);
	if (l_len <= 0)
		return ((char *)b);
	while (*b && (l_len <= len))
	{
		buf_b = (char *)b;
		if (ft_strncmp(b++, l, l_len) == 0)
			return (buf_b);
		len--;
	}
	return (NULL);
}
