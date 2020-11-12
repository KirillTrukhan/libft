/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:46:32 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/11 18:22:16 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	slen;

	len = 0;
	slen = ft_strlen(src);
	while (*dst && size > 0)
	{
		dst++;
		len++;
		size--;
	}
	while (*src && size-- > 1)
		*dst++ = *src++;
	if (size == 1 || *src == 0 || size == 0)
		*dst = '\0';
	return (slen + len);
}
