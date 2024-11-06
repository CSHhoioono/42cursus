/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:33:15 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/15 19:56:46 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	loc;

	if (count <= 0 || size <= 0)
		return (malloc(0));
	if (count > (size_t)(-1) / size)
		return (NULL);
	memory = malloc(count * size);
	if (memory == NULL)
		return (NULL);
	loc = 0;
	while (loc < (count * size))
	{
		*(unsigned char *)(memory + loc) = 0;
		loc++;
	}
	return (memory);
}
