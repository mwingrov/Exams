/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 09:01:19 by exam              #+#    #+#             */
/*   Updated: 2017/08/20 16:15:40 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int n)
{
	return (n < 0 ? -n : n);
}

int	convert(int value, int base, int *store)
{
	int	i;
	int	val;

	val = value;
	i = 0;
	while (val)
	{
		store[i] = ft_abs(val % base);
		val /= base;
		++i;
	}
	if (value < 0 && base == 10)
	{
		store[i] = '-';
		++i;
	}
	return (i);
}

char	*ft_itoa_base(int value, int base)
{
	char	base_digits[16] = {'0','1','2','3','4','5','6','7','8',
										'9','A','B','C','D','E','F'};
	int		store[32];
	int		i;
	int		j;
	char	*ret;

	j = 0;
	if (base < 2 || base > 16 || value == 0)
		return ("0");
	i = convert(value, base, store);
	ret = (char *)malloc(sizeof(char) * i + 1);
	ret[i] = '\0';
	while (i--)
	{
		if (store[i] == '-')
			ret[j] = store[i];
		else
			ret[j] = base_digits[store[i]];
		++j;
	}
	return (ret);
}
