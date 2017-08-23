/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 07:25:24 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/23 07:48:45 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len(int num)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		len++;
		num = -num;
	}
	len++;
	num = num / 10;
	while (num)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*arr;
	long	num;

	len = ft_len(nbr);
	num = (long)nbr;
	arr = (char *)malloc(sizeof(char) * len + 1);
	arr[len] = '\0';
	if (num < 0)
	{
		num = -num;
		arr[0] = '-';
	}
	arr[--len] = (num % 10) + 48;
	num = num / 10;
	while (num)
	{
		arr[--len] = (num % 10) + 48;
		num = num / 10;
	}
	return (arr);
}
