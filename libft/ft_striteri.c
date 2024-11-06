/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:26:24 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/18 11:42:41 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	if (!s || !f)
		return ;
	index = 0;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
	return ;
}
