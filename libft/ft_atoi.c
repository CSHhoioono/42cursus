/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:11:02 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/15 19:31:50 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *nptr)
{
	int	sign;
	int	buf_atoi;

	sign = 1;
	buf_atoi = 0;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while ('0' <= *nptr && *nptr <= '9')
		buf_atoi = (buf_atoi * 10) + (int)(*nptr++ - '0');
	return (buf_atoi * sign);
}
