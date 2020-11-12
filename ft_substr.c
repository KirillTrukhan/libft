/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:17:52 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/11 15:18:19 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	i;
	char	*res;

	j = 0;
	if (!s)
		return (0);
	i = ft_strlen(s);
	if (!(res = (char*)malloc(len + 1)))
		return (NULL);
	while (len-- > 0 && start < i)
		res[j++] = s[start++];
	res[j] = '\0';
	return (res);
}
