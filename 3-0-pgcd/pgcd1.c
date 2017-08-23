/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaunder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/22 15:23:08 by bsaunder          #+#    #+#             */
/*   Updated: 2017/08/08 18:14:06 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

int		pgcd(int a, int b)
{
	int div;
	int i;

	div = 1;
	i = 1;
	while (i <= ft_min(a, b))
	{
		if (a % i == 0 && b % i == 0)
			div = i;
		i++;
	}
	return (div);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%i", pgcd(atoi(av[1]), atoi(av[2])));
	printf("\n");
	return (0);
}
