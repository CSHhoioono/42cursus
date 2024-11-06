/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:07:29 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/13 16:37:22 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	loc;

	loc = 0;
	while ((loc < n) && (s1[loc] || s2[loc]))
	{
		if (s1[loc] != s2[loc])
			return ((int)((unsigned char)s1[loc] - (unsigned char)s2[loc]));
		loc++;
	}
	return (0);
}
