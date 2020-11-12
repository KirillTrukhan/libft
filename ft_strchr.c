/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:30:36 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/11 15:04:08 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int i;

	i = 0;
	while (str[i] && str[i] != ch)
		i++;
	if (str[i] == ch)
		return ((char*)str + i);
	else
		return (NULL);
}
