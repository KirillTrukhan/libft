/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:53:09 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/11 14:55:23 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			s;
	const unsigned char		*srt;

	i = 0;
	s = c;
	srt = src;
	while (i < n)
	{
		if (srt[i] == s)
			return ((void*)src + i);
		i++;
	}
	return (NULL);
}
