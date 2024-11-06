/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:55:34 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/18 11:18:36 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	map = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!map)
		return (NULL);
	index = 0;
	while (index < ft_strlen(s))
	{
		map[index] = f(index, s[index]);
		index++;
	}
	return (map);
}
