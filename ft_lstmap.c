/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:52:45 by kirilltruha       #+#    #+#             */
/*   Updated: 2020/11/12 18:27:53 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *first;
	t_list *new;

	if (!lst || !(new = ft_lstnew(f(lst->content))))
		return (NULL);
	first = new;
	lst = lst->next;
	while (lst)
	{
		if ((new->next = ft_lstnew(f(lst->content))))
		{
			lst = lst->next;
			new = new->next;
		}
		else
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
	}
	return (first);
}
