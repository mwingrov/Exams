/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime_m.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 07:32:56 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/09 07:54:48 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	nb;
	int	n;

	if (ac == 2)
	{
		if (av[1][0] == '\0')
		{
			printf("\n");
			return (0);
		}
		nb = atoi(av[1]);
		if (nb == 1)
		{
			printf("1\n");
			return (0);
		}
		while (1)
		{
			n = 1;
			while (++n <= nb)
			{
				if (nb % n == 0)
				{
					printf("%d", n);
					nb = nb / n;
					break;
				}
			}
			if (nb == 1)
				break;
			else
				printf("*");
		}
	}
	printf("\n");
	return (0);
}
