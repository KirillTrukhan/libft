/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:11:44 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/11 17:26:59 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t buf)
{
	size_t i;
	size_t res;

	i = 0;
	res = 0;
	if (dst == 0 || src == 0)
		return (res);
	while (src[res])
		res++;
	if (buf == 0)
		return (res);
	while (i < (buf - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (res);
}
