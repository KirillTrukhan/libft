/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:24:42 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/11 17:29:50 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	size_t				i;
	unsigned char		*temp;
	const unsigned char	*src;

	i = 0;
	temp = dest;
	src = source;
	if (dest == NULL && source == NULL)
		return (NULL);
	if (temp <= src)
	{
		while (i++ < n)
			*temp++ = *src++;
	}
	else
	{
		i = n;
		while (i > 0)
		{
			temp[i - 1] = src[i - 1];
			i--;
		}
	}
	return (dest);
}
