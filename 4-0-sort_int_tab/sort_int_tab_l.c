/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab_l.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:26:23 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/23 18:17:25 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		*sort_int_tab(int *tab, unsigned int size)
{
	unsigned int a, b;

	a = 0;
	while (a < size)
	{
		b = a;
		while (b < size)
		{
			if (tab[a] > tab[b])
				ft_swap(&tab[a], &tab[b]);
			b++;
		}
		a++;
	}
	return tab;
}

int	main(void)
{
	int *tab;
	int i;

	i = 0;
	tab[0] = 1;
	tab[1] = 43;
	tab[2] = 0;
	tab[3] = 5;
	tab = sort_int_tab(tab, 4);
	while (i < 4)
	{
		printf("%d=>", tab[i]);
		i++;
	}
	printf("End\n");
}
