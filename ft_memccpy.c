/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:39:18 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/11 17:30:55 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t j)
{
	size_t				i;
	unsigned char		c;
	unsigned char		*temp;
	const unsigned char	*sourse;
	unsigned char		*res;

	i = 0;
	temp = dest;
	sourse = src;
	c = ch;
	while (i < j && sourse[i] != c)
	{
		temp[i] = sourse[i];
		i++;
	}
	if (sourse[i] == c)
	{
		temp[i] = sourse[i];
		res = temp + i + 1;
		return (res);
	}
	else
		return (NULL);
}
