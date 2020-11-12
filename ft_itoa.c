/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:41:21 by tnotch            #+#    #+#             */
/*   Updated: 2020/11/12 12:10:50 by tnotch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizearray(int n)
{
	int i;

	i = 0;
	while ((n /= 10))
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	long long int	num;
	char			*res;
	int				i;
	int				sign;

	i = 1;
	sign = 0;
	num = n;
	if (n < 0)
	{
		sign = 1;
		num = -num;
	}
	i = i + sign + ft_sizearray(n);
	if (!(res = (char*)malloc(i + 1)))
		return (NULL);
	res[i--] = '\0';
	while (i >= sign)
	{
		res[i--] = num % 10 + '0';
		num = num / 10;
	}
	if (sign != 0)
		res[0] = '-';
	return (res);
}
