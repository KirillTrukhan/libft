/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:26:36 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/12 17:54:03 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sofa(char const *s, char c)
{
	int res;

	res = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		if (*s != c && *s)
		{
			res++;
			while (*s != c && *s)
				s++;
		}
		if (*s == c && *s)
		{
			while (*s == c && *s)
				s++;
		}
	}
	return (res);
}

static char	*ft_mallocandfree(int size, char **result, int count)
{
	char *all;

	if (!(all = (char*)malloc(sizeof(char) * size)))
	{
		while (count > 0)
			free(result[count--]);
		free(result);
		return (NULL);
	}
	else
		return (all);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		soa;
	char	**res;

	if (!s || !(res = (char**)malloc(sizeof(char**) * (ft_sofa(s, c) + 1))))
		return (NULL);
	i = 0;
	soa = ft_sofa(s, c);
	while (i < soa)
	{
		j = 0;
		while (*s == c)
			s++;
		while (*(s + j) != c && (*(s + j)))
			j++;
		if (!(res[i] = ft_mallocandfree(j, res, i)))
			return (NULL);
		j = 0;
		while (*s != c && *s)
			res[i][j++] = *s++;
		res[i++][j] = '\0';
	}
	res[i] = NULL;
	return ((char**)res);
}
