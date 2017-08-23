/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:45:04 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/04 16:00:29 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int	*ft_range(int start, int end)
{
	int	*tab;
	int	i;

	i = 0;
	while ((start + i) <= end)
		i++;
	if (!(tab = (int *)malloc(sizeof(int) * i)))
		return (NULL);
	i = -1;
	while ((start  + ++i) <= end)
		tab[i] = start + i;
	return (tab);
}

int	*ft_rangei(int start, int end)
{
	int	*tab;
	int	i;

	i = 0;
	while ((start + i) <= end)
		i++;
	if (!(tab = (int *)malloc(sizeof(int) * i)))
		return (NULL);
	i = -1;
	while ((end - ++i) >= start)
		tab[i] = end - i;
	return (tab);
}

int	*ft_rrange(int start, int end)
{
	if (start < end)
		return (ft_rangei(start, end));
	return (ft_range(end, start));
}
