/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:48:21 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/13 16:02:29 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (0 < len)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}
