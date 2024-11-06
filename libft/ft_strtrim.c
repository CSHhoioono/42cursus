/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:03:07 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/17 18:19:12 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			len;
	char			*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	len = ft_strlen(s1);
	while (1 <= len && ft_strchr(set, s1[len - 1]))
		len--;
	if (len != 0)
		len = len - start;
	trim = ft_substr(s1, start, len);
	return (trim);
}
