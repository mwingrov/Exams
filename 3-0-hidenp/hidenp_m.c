/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp_m.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 17:56:09 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/08 18:07:11 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
			ft_putchar('1');
		else
			ft_putchar('0');
	}
	else
		ft_putchar('\n');
	return (0);
}
