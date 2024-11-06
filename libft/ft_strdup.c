/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:59:01 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/15 20:11:10 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	s_len;

	s_len = ft_strlen(s);
	dup = (char *)malloc((s_len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s, s_len + 1);
	return (dup);
}
