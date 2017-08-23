/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_m.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 07:28:55 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/16 08:13:19 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_len(int num)
{
	int len;

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

	num = (long)nbr;
	len = ft_len(num);
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

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_itoa(av));
	}
	else
		printf("\n");
	return (0);
}
