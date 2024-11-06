/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:20:28 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/14 19:46:15 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tc_s1;
	unsigned char	*tc_s2;
	size_t			loc;

	tc_s1 = (unsigned char *)s1;
	tc_s2 = (unsigned char *)s2;
	loc = 0;
	while (loc < n)
	{
		if (tc_s1[loc] != tc_s2[loc])
			return ((int)(tc_s1[loc] - tc_s2[loc]));
		loc++;
	}
	return (0);
}
