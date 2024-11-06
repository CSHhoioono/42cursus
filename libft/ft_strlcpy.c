/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:49:57 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/14 20:06:06 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	size_t	loc;

	loc = 0;
	if (n <= 0)
		return (ft_strlen(s));
	while ((loc < (n - 1)) && s[loc])
	{
		d[loc] = s[loc];
		loc++;
	}
	if (loc < n)
		d[loc++] = '\0';
	return (ft_strlen(s));
}
