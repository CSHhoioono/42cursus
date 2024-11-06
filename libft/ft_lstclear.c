/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:20:32 by soochoi           #+#    #+#             */
/*   Updated: 2024/10/23 17:30:36 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iterator;

	if (!lst || !del)
		return ;
	if (!(*lst))
		return ;
	while (*lst)
	{
		iterator = *lst;
		(*lst) = (*lst)->next;
		ft_lstdelone(iterator, del);
	}
}
