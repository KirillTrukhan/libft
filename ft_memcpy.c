/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:48:03 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/11 17:26:26 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp;
	const unsigned char	*sourse;

	if ((dest == NULL) && (src == NULL))
		return (dest);
	i = 0;
	temp = dest;
	sourse = src;
	while (i < n)
	{
		temp[i] = sourse[i];
		i++;
	}
	return (dest);
}
