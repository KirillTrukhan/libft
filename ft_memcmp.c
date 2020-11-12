/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:42:54 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/11 14:56:04 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*first;
	const unsigned char	*second;
	unsigned char		f;
	unsigned char		s;
	size_t				i;

	i = 0;
	first = s1;
	second = s2;
	while (i < n)
	{
		if (first[i] != second[i])
		{
			f = first[i];
			s = second[i];
			return (f - s);
		}
		else
			i++;
	}
	return (0);
}
