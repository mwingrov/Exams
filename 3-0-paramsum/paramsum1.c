/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 17:19:07 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/08 17:28:39 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putnbr(int n)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr = (nb / 10);
		ft_putnbr = (nb % 10);
	}
	else
		ft_putchar(nb + 48);
	return (nb);
}

int		main(int ac, char **av)
{
	int		i;
	(void)av;

	i = 1;
	while (i < ac)
		i++;
	i = i - 1;
	ft_putnbr(i);
	ft_putchar('\n');
	return (0);
}
