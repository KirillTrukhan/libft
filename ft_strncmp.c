/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:51:32 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/11 15:07:39 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	f;
	unsigned char	s;

	i = 0;
	while (i < n)
	{
		f = s1[i];
		s = s2[i];
		if (s1[i] == s2[i] && s1[i] && s2[i])
			i++;
		else
			return (f - s);
	}
	return (0);
}
