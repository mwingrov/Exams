/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 16:00:39 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/08 16:57:25 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int len;

	len = (end >= start) ? end - start + 1: start - end + 1;
	if(!(range = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	while(len--)
		range[len] = end >= start ? start++ : start--;
	return(range);
}
