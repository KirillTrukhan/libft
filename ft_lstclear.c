/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:19:36 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/12 18:25:51 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *previos;
	t_list *entry;

	if (del)
	{
		entry = *lst;
		while (*lst)
		{
			del((*lst)->content);
			previos = *lst;
			*lst = previos->next;
			free(previos);
		}
		entry = NULL;
	}
}
