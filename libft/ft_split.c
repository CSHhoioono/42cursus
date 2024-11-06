/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:24:36 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/18 10:53:51 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_size(char const *s, char c)
{
	char	*buf_s;
	size_t	count;

	buf_s = (char *)s;
	count = 0;
	while (*buf_s)
	{
		while (*buf_s == c && *buf_s)
			buf_s++;
		if (*buf_s)
			count++;
		while (*buf_s != c && *buf_s)
			buf_s++;
	}
	return (count);
}

static char	*set_split(char const *s, size_t *loc, char c)
{
	char	*split_str;
	size_t	buf_loc;

	while (s[*loc] == c && s[*loc])
		(*loc)++;
	buf_loc = *loc;
	while (s[*loc] != c && s[*loc])
		(*loc)++;
	split_str = ft_substr(s, buf_loc, *loc - buf_loc);
	return (split_str);
}

static int	check_error(char **arr, size_t arr_size)
{
	char	**temp;
	size_t	loc;

	temp = arr;
	loc = 0;
	while (loc < arr_size)
	{
		if (!arr[loc])
		{
			while (*temp)
				free(*temp++);
			free(arr);
			return (1);
		}
		loc++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	split_size;
	size_t	split_loc;
	size_t	loc;

	if (!s)
		return (NULL);
	split_size = count_size(s, c);
	split = (char **)malloc(sizeof(char *) * (split_size + 1));
	if (!split)
		return (NULL);
	split_loc = 0;
	loc = 0;
	while (split_loc < split_size)
		split[split_loc++] = set_split(s, &loc, c);
	split[split_loc] = NULL;
	if (check_error(split, split_size))
		return (NULL);
	return (split);
}
