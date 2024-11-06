/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:07:21 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/14 20:53:36 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t	d_len;
	size_t	loc;

	d_len = ft_strlen(d);
	loc = 0;
	if (n <= d_len)
		return (n + ft_strlen(s));
	else if (n <= (d_len + ft_strlen(s)))
	{
		while (loc < (n - d_len - 1))
		{
			d[d_len + loc] = s[loc];
			loc++;
		}
	}
	else
	{
		while (s[loc] != '\0')
		{
			d[d_len + loc] = s[loc];
			loc++;
		}
	}
	d[d_len + loc] = '\0';
	return (d_len + ft_strlen(s));
}
