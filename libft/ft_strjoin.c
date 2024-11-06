/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:54:13 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/16 17:57:30 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	total_len;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		join = ft_strdup(s2);
	else if (!s2)
		join = ft_strdup(s1);
	else
	{
		total_len = ft_strlen(s1) + ft_strlen(s2);
		join = (char *)ft_calloc(total_len + 1, sizeof(char));
		if (!join)
			return (NULL);
		ft_strlcpy(join, s1, ft_strlen(s1) + 1);
		ft_strlcat(join, s2, total_len + 1);
	}
	return (join);
}
