/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:51:11 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/12 15:54:56 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t i;
	size_t j;

	i = ft_strlen(hay);
	j = ft_strlen(need);
	if (j == 0)
		return ((char*)hay);
	if (i < j)
		return (0);
	i = 0;
	while (i + j <= len && hay)
	{
		if (*hay == *need)
		{
			if (0 == ft_strncmp(hay, need, j))
				return ((char*)hay);
		}
		hay++;
		i++;
	}
	return (NULL);
}
