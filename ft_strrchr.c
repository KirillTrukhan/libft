/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:11:58 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/04 13:56:26 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == ch)
			return ((char*)str + i);
		i--;
	}
	return (NULL);
}
