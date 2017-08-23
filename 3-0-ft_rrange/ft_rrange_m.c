/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 16:38:55 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/08 17:07:52 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*range;
	int	len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(range = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	while (len--)
		range[len] = (end >= start) ? start++ : start--;
	return (range);
}
