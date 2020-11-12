/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:40:01 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/11 15:17:01 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	r;
	size_t	len;

	i = 0;
	r = 0;
	if (!s1)
		return (NULL);
	j = ft_strlen(s1);
	j--;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[j]) && s1[j] && j >= i)
		j--;
	len = j - i + 1;
	if (!(res = (char*)malloc(j - i + 2)))
		return (NULL);
	while (r < len)
		res[r++] = s1[i++];
	res[r] = '\0';
	return (res);
}
